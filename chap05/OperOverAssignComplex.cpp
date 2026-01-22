//#include "stdafx.h"
#include <iostream>
using namespace std;

class CmyCMyData{
public:
	explicit CmyCMyData(int nParam){
		m_pnData = new int(nParam);
	}

	~CmyCMyData() { 
		delete m_pnData; 
	}

	operator int() { 
		return *m_pnData;
	}

	void operator=(const CmyCMyData &rhs){
		delete m_pnData;

		m_pnData = new int(*rhs.m_pnData);
	}

	CmyCMyData& operator+=(const CmyCMyData &rhs){
		int *pnNewData = new int(*m_pnData);

		*pnNewData += *rhs.m_pnData;

		delete m_pnData;
		m_pnData = pnNewData;

		return *this;
	}

private:
	int *m_pnData = nullptr;
};

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	CmyCMyData a(0), b(5), c(10);
	a += b;
	a += c;
	cout << a << endl;

	return 0;
}
