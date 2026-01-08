//#include "stdafx.h"
#include <iostream>
using namespace std;

void TestFunc(const int &nParam){
	int &nNewParam = const_cast<int &>(nParam);
	
	nNewParam = 20;
}

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	int nData = 10;
	
	TestFunc(nData);
	
	cout << nData << endl;
	
	return 0;
}
