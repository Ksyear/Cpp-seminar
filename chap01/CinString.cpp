//#include "stdafx.h"
#include <string>
#include <cstdio>
#include <iostream>

//int _tmain(int argc, _TCHAR* argv{}){
int main(int argc, char* agrv[]){
	int nAge;
	std::cout << "Please enter your age." << std::endl;
	std::cin >> nAge;

	char szJob[32];
	std::cout << "Please enter your occupation." << std::endl;
	std::cin >> szJob;

	std::string strName;
	std::cout << "Please enter your name." << std::endl;
	std::cin >> strName;

	std::cout << "Your name is " << strName << ", your age is " << nAge << " year old, and your job is " << szJob << std::endl;

	return 0;
}
