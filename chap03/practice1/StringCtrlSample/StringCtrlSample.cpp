#include "stdafx.h"
#include "MyString.h"

void TestFunc(const CMyString &param){
	cout << param.GetString() << endl;
}

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	CMyString strData;
	strData.SetString("Hello");
	cout << strData.GetString() << endl;
	
	return 0;
}
