//#include "stdafx.h"
#include <iostream>

using namespace std;

namespace TEST{
	int g_nData = 100;
	
	void TestFunc(void){
		cout << "TEST::TestFunc()" << endl;
	}
}

using namespace TEST;

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	TestFunc();
	cout << g_nData << endl;
	
	return 0;
}
