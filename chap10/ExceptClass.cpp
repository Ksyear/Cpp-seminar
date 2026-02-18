//#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

class CMyException{
public:
  CMyException(int nCode, const char *pszMsg){
    m_nErrorCode = nCode;
    strncpy(m_szMsg, pszMsg, sizeof(m_szMsg) - 1);
    m_szMsg[sizeof(m_szMsg) - 1] = '\0';
  }

  int GetErrorCode() const{ 
	  return m_nErrorCode; 
	}
  const char *GetMessage() const{ 
	  return m_szMsg; 
	}

private:
  int m_nErrorCode;
  char m_szMsg[128];
};

//int _tmain(int argc, _TCHAR *argv[]) {
int main(int argc, char* argv[]){
  try {
    int nInput = 0;
    cout << "Please enter a positive integer.: ";
    cin >> nInput;

    if (nInput < 0) {
      CMyException exp(10, "You must enter a positive integer.");
      throw exp;
    }
  }

  catch (CMyException &exp){
    cout << "ERROR CODE [" << exp.GetErrorCode() << "] " << exp.GetMessage()
         << endl;
  }

  return 0;
}
