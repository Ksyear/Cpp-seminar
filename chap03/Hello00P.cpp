//#include "stdafx.h"
#include <cstdio>

class USERDATA{
public:
	int nAge;
	char szName[32];
	
	void Print(void){
		printf("%d, %s\n", nAge, szName);
	}
};

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	USERDATA user = {10, "Steve"};
	user.Print();
	
	return 0;
}
