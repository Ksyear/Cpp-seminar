#include "led-matrix.h"     
#include "graphics.h"        
#include <iostream>          
#include <time.h>           
#include <ctime>             
#include <signal.h>        
#include <algorithm>        

using namespace rgb_matrix;  

volatile bool interrupt_received = false;

static void InterruptHandler(int signo) { 
	interrupt_received = true; 
}

int main(int argc, char *argv[]) {
    RGBMatrix::Options defaults;
    defaults.rows = 16;                    
    defaults.cols = 32;                    
    defaults.chain_length = 3;             
    defaults.parallel = 1;                 
    defaults.hardware_mapping = "regular"; 
    defaults.brightness = 50;              

    RuntimeOptions runtime_defaults;
    RGBMatrix *matrix = RGBMatrix::CreateFromOptions(defaults, runtime_defaults, &argc, &argv);
    if (matrix == NULL) return 1;          

    Font small_font, large_font;
    if (!small_font.LoadFont("./fonts/4x6.bdf") || !large_font.LoadFont("./fonts/7x14.bdf")) {
        std::cerr << "Font load failed." << std::endl;
        return 1; 
    }

    Color color(255, 255, 255);           
    
    signal(SIGINT, InterruptHandler);    
    signal(SIGTERM, InterruptHandler);    

    FrameCanvas *canvas = matrix->CreateFrameCanvas();
    char date_buf[12], week_buf[8], time_buf[12]; 
    
    struct timespec sleep_time;
    sleep_time.tv_sec = 0;               
    sleep_time.tv_nsec = 100000000L;      

    while (!interrupt_received) {
        time_t now = time(0);  
	struct tm *ltm = localtime(&now); 

        strftime(date_buf, sizeof(date_buf), "%m-%d", ltm);
        strftime(week_buf, sizeof(week_buf), "%a", ltm);
        strftime(time_buf, sizeof(time_buf), "%H:%M", ltm);

        for (int i = 0; week_buf[i]; i++) {
	        week_buf[i] = toupper(week_buf[i]);
        }

        canvas->Clear(); 
        
        rgb_matrix::DrawText(canvas, small_font, 6, 8, color, NULL, date_buf, 0);
        rgb_matrix::DrawText(canvas, small_font, 9, 15, color, NULL, week_buf, 0);
        
        for(int y=0; y<16; y+=2) canvas->SetPixel(31, y, 40, 40, 40); 
        
        rgb_matrix::DrawText(canvas, large_font, 46, 15, color, NULL, time_buf, 0);

        canvas = matrix->SwapOnVSync(canvas);
        
        nanosleep(&sleep_time, NULL); 
    }

    matrix->Clear();
    delete matrix;
    return 0;
}
