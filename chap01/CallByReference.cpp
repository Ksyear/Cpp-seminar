//#include "stdafx.h"
#include <iostream>
using namespace std;

void TestFunc(int &rParam){
	rParam = 100;
}

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	int nData = 0;
	
	TestFunc(nData);
	cout << nData << endl;

	return 0;
}
