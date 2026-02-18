//#include "stdafx.h"
#include <iostream>
using namespace std;

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	int a = 100, b;
	cout << "Input number: ";
	cin >> b;

	if (b > 0){
		cout << a / b << endl;
	} else{
		cout << "ERROR: You cannot divide by zero." << endl;
	}
	
	return 0;
}
