//#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest{
public:
	CTest(){
		cout << "CTest::CTest()" << endl;
	}
	
	~CTest(){
		cout << "~CTest::CTest()" << endl;
	}
};

CTest a;

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	cout << "Begin" << endl;
	cout << "End" << endl;
	
	return 0;
}
