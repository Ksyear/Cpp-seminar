//#include "stdafx.h"
#include <string> 
#include <iostream>
using namespace std;

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	string strName;
	cout << "Name: ";
	cin >> strName;
	cout << "Your name is " + strName + "." << endl;

	return 0;
}
