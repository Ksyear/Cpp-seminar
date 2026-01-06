//#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest{
public:
	CTest(){
		cout << "Ctest() : Constructor function" << endl;
		m_nData =10;
	}
	
	int m_nData;
	
	void PrintData(void){
		cout << m_nData << endl;
	}
};

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	cout << "main() function start" << endl;
	
	CTest t;
	t.PrintData();
	
	cout << "main() function end" << endl;
	
	return 0;
}
