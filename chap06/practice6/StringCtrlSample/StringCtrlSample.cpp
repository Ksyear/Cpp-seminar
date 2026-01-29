#include "stdafx.h"
#include "MyStringEx.h"

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	CMyStringEx strTest;
	strTest.SetString("I am a boy.");
	cout << strTest << endl;

	int nIndex = strTest.Find("am");
	cout << "Index: " << nIndex << endl;

	return 0;
}
