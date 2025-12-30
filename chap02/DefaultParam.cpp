//#include "stdafx.h"
#include <iostream>

int TestFunc(int nParam = 10){
	return nParam;
}

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	std::cout << TestFunc() << std::endl;

	std::cout << TestFunc(20) << std::endl;

	return 0;
}
