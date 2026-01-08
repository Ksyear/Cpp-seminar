#include "stdafx.h"
#include "MyString.h"

CMyString::CMyString() : m_pszData(nullptr), m_nLength(0){ 
}

CMyString::~CMyString(){
	Release();
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
