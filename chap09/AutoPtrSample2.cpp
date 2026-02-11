//#include "stdafx.h"
#include <memory>
#include <iostream>
using namespace std;

class CMyData{
public:
	CMyData(){ 
		cout << "CMyData()" << endl; 
	}
	~CMyData(){ 
		cout << "~CMyData()" << endl; 
	}
	void TestFunc(){ 
		cout << "CMyData::TestFunc()" << endl; 
	}
};

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	auto_ptr<CMyData> ptrTest(new CMyData);
	auto_ptr<CMyData> ptrNew;

	cout << "0x" << ptrTest.get() << endl;

	ptrNew = ptrTest;
	cout << "0x" << ptrTest.get() << endl;

	ptrTest->TestFunc();

	return 0;
}
