//#include "stdafx.h"
#include <iostream>
using namespace std;

void ExceptTest1(){
	int nInput;
	cout << "Enter a positive integer between 1 and 10.: ";
	cin >> nInput;

	if (nInput < 1 || nInput > 10)
		throw nInput;
}

void ExceptTest2(){
	char ch;
	cout << "Menu: [A]dd\t[D]elete\t[E]xit\n:";
	cin >> ch;

	if (ch != 'A' && ch != 'D' && ch != 'E')
		throw ch;
}

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	cout << "*****Begin*****" << endl;
	try{
		ExceptTest1();
		ExceptTest2();
	}

	catch (int nExp){
		cout << "ERROR: The number " << nExp << " is out of range." << endl;
	}

	catch (char ch){
		cout << "ERROR: " << ch << " is an unknown menu." << endl;
	}

	cout << "******End******" << endl;

	return 0;
}
