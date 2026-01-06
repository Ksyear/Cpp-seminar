//#include "stdafx.h"
#include <iostream> 
using namespace std;

class CTest{
public:
	CTest(void);
	int m_nData = 5;
};
	
CTest::CTest(void) { }

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	CTest a;
	cout << a.m_nData << endl;
	
	return 0;
}
