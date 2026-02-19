//#include "stdafx.h"
#include <iostream>
using namespace std;

int TestFunc(int nParam){
	cout << "Function Pointer: " << nParam << endl;

	return nParam;
}

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	auto func = [](int nParam) -> int{
		cout << "Lambda: " << nParam << endl;

		return nParam;
	};

	func(5);

	auto pfTest = TestFunc;
	pfTest(10);

	return 0;
}    
