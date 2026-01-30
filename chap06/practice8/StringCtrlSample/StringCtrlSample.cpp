#include "stdafx.h"
#include "MyStringEx.h"

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	CMyStringEx strLeft("Hello"), strRight("World");
	cout << strLeft + strRight << endl;

	return 0;
}
