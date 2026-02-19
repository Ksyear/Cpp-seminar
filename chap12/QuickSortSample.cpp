//#include "stdafx.h"
#include <iostream>
using namespace std;

int CompareData(const void *pLeft, const void *pRight){
	return *(int *)pLeft - *(int *)pRight;
}

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	int aList[5] = { 30, 50, 10, 20, 40 };

	qsort(aList, 5, sizeof(int), CompareData);

	for (auto &n : aList){
		cout << n << '\t';
	}
	
	cout << endl;

	return 0;
}
