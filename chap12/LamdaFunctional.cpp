//#include "stdafx.h"
#include <functional> // std::function 객체를 사용하기 위한 헤더 추가
#include <iostream>
using namespace std;

void TestFunc(char* pszParam, std::function<int(char*, int)> param){
	cout << pszParam << endl;
	param("Hello", 10);
}

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	cout << "*****Begin*****" << endl;
	::TestFunc(
		"TestFunc()",

		[](char *pszParam, int nParam)->int
		{
			cout << pszParam << " : " << nParam << endl;

			return 0;
		}
	);

	cout << "******End******" << endl;

	return 0;
}
