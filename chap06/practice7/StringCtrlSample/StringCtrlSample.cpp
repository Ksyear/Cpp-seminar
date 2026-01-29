#include "stdafx.h"
#include "MyStringEx.h"

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	CMyStringEx strTest;

	strTest.SetString("dog");
	cout << strTest << endl;

	strTest.SetString("Hello");
	cout << strTest << endl;

	return 0;
}
