//#include "stdafx.h"
#include <iostream>
using namespace std;

class CmyCMyData{
public:
	CmyCMyData(int nParam) : m_nData(nParam) {}

	operator int() { 
		return m_nData; 
	}

	int operator++(){
		cout << "operator++()" << endl;
		return ++m_nData;
	}

	int operator++(int){
		cout << "operator++(int)" << endl;
		int nData = m_nData;
		m_nData++;

		return nData;
	}

private:
	int m_nData = 0;
};

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	CmyCMyData a(10);

	cout << ++a << endl;

	cout << a++ << endl;
	cout << a << endl;

	return 0;
}
