#include "stdafx.h"
#include "MyString.h"

CMyString::CMyString() : m_pszData(nullptr), m_nLength(0){ 
}

CMyString::~CMyString(){
	Release();
}

CMyString::CMyString(const char *pszParam) : m_pszData(NULL), m_nLength(0){
	SetString(pszParam);
}

CMyString::CMyString(const CMyString &rhs) : m_pszData(NULL), m_nLength(0){
	this->SetString(rhs.GetString());
}

CMyString::CMyString(CMyString &&rhs) : m_pszData(NULL), m_nLength(0){
	cout << "CMyString Call Move Generator" << endl;

	m_pszData = rhs.m_pszData;
	m_nLength = rhs.m_nLength;

	rhs.m_pszData = NULL;
	rhs.m_nLength = 0;
}

int CMyString::SetString(const char* pszParam){
	Release();
	
	if(pszParam == nullptr){ 
		return 0;
	}

	int nLength = strlen(pszParam);

	if(nLength == 0){
		return 0;
	}
	
	m_pszData = new char[nLength + 1];
	
	strcpy(m_pszData, pszParam);
	m_nLength = nLength;
	
	return nLength;
}

const char* CMyString::GetString() const{
	return m_pszData;
}

void CMyString::Release(){
	if(m_pszData != nullptr){
		delete[] m_pszData;
	}
	
	m_pszData = nullptr;
	m_nLength = 0;
}
CMyString& CMyString::operator=(const CMyString &rhs){
	if(this != &rhs){
		this->SetString(rhs.GetString());
	}

	return *this;
}

int CMyString::GetLength() const{
	return m_nLength;
}

int CMyString::Append(const char * pszParam){
	if(pszParam == NULL){
		return 0;
	}

	int nLenParam = strlen(pszParam);

	if(nLenParam == 0){
		return 0;
	}

	if(m_pszData == NULL){
		SetString(pszParam);

		return m_nLength;
	}

	int nLenCur = m_nLength;

	char *pszResult = new char[nLenCur + nLenParam + 1];

	strcpy(pszResult, m_pszData);
	strcpy(pszResult + nLenCur, pszParam);

	m_pszData = pszResult;
	m_nLength = nLenCur + nLenParam;

	return m_nLength;
}

CMyString CMyString::operator+(const CMyString &rhs){
	CMyString strResult(m_pszData);
	strResult.Append(rhs.GetString());

	return strResult;
}

CMyString& CMyString::operator+=(const CMyString &rhs){
	Append(rhs.GetString());

	return *this;
}

char& CMyString::operator[](int nIndex){
	return m_pszData[nIndex];
}

char CMyString::operator[](int nIndex) const{
	return m_pszData[nIndex];
}
