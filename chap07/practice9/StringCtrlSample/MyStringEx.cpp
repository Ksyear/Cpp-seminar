#include "stdafx.h"
#include "MyStringEx.h"

CMyStringEx::CMyStringEx(){
}

CMyStringEx::~CMyStringEx(){
}

int CMyStringEx::Find(const char * pszParam){
	if (pszParam == NULL || GetString() == NULL){
		return -1;
	}

	const char *pszResult = strstr(GetString(), pszParam);

	if (pszResult != NULL){
		return pszResult - GetString();
	}

	return -1;
}

void CMyStringEx::OnSetString(char * pszData, int nLength){
	if (strcmp(pszData, "dogbaby") == 0){
		strncpy(pszData, "person", nLength);
		pszData[nLength] = '\0';
	}
}
