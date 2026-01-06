#include <stdio.h>

typedef struct USERDATA{
	int nAge;
	char szName[32];
	void(*Print)(struct USERDATA *);
} USERDATA;

void PrintData(USERDATA *pUser){
	printf("%d, %s\n", pUser->nAge, pUser->szName);
}

int main(void){
	USERDATA user = {20, "Steve", PrintData};
	// printf("%d, %s\n", user.nAge, user.szName);   
	// PrintData(&user);      
	user.Print(&user);
	//user.Print(); 

	return 0;
}
