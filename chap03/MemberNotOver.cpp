//#include "stdafx.h"
#include <iostream>
using namespace std;

void TestFunc(int nParam){
	cout << nParam << endl;
}  

//int _tmain(int argc, _TCHAR argv[]){
int main(int argc, char* argv[]){
	TestFunc(10);
	TestFunc(5.5);
	
	return 0;
}
