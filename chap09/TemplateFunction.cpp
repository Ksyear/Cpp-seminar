//#include "stdafx.h"
//#include <memory>
#include <cstring>
#include <iostream>
using namespace std;

template<typename T>
T Add(T a, T b){ 
	return a + b; 
}

template<>
const char* Add(const char* pszLeft, const char* pszRight){
	size_t nLenLeft = strlen(pszLeft);
	size_t nLenRight = strlen(pszRight);
	char *pszResult = new char[nLenLeft + nLenRight + 1];

	strcpy(pszResult, pszLeft);
	strcat(pszResult, pszRight);

	return pszResult;
}

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	int nResult = Add<int>(3, 4);
	cout << nResult << endl;

	const char *pszResult = Add("Hello", "World");
	cout << pszResult << endl;
	delete[] pszResult;

	return 0;
}
