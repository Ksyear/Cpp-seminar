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

CMyString::CMyString(const CMyString &rhs) : m_pszData(NULL), m_nLEngth(0){
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
