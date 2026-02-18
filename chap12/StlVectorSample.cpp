//#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	vector<int> vec(3);
	vec[0] = 10;
	vec[1] = 20;
	vec[2] = 20;

	for (auto &n : vec)
		cout << n << '\t';

	cout << endl;

	vec.push_back(30);
	vec.push_back(40);

	for (auto &n: vec){
		cout << n << '\t';
	}

	cout << endl;

	return 0;
}
