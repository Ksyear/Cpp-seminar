#include "stdafx.h"
#include "MyStringEx.h"

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	CMyString b("World"), c;
	c = "Hello" + b;
	cout << c << endl;

	return 0;
}
