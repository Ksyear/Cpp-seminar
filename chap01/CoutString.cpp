//#include "stdafx.h"
#include <string>
#include <iostream>

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	std::string strData = "Test string";
	std::cout << "Sample stromg" << std::endl;
	std::cout << strData << std::endl;
	
	strData = "New string";
	std::cout << strData << std::endl;

	std::cout << "I\'m " << 20 << " years " << "old." << std::endl;

	return 0;
}
