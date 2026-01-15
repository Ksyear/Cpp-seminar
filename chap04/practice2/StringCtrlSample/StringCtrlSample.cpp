#include "stdafx.h"
#include "MyString.h"

//int _tmain(int argc, _TCHAR* argv[]){
/*int main(int argc, char* argv[]){
	CMyString strData, strTest;
        strData.SetString("Hello");
        strTest.SetString("World");

        CMyString strNewData(strData);
        cout << strNewData.GetString() << endl;

        strNewData = strTest;
        cout << strNewData.GetString() << endl;

        return 0;
}*/

void TestFunc(const CMyString &strParam){
	CMyString strTest("TestFunc() return");
	cout << strParam << endl;

	return strTest;
}

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	/*CMyString strData("Hello");

	::TestFunc(strData);
	::TestFunc(CMyString("World"));
	*/

	TestFunc();

	return 0;
}
