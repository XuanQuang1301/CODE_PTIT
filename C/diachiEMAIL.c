#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void chuanhoa2(char A[]){
	for(int i=0;i<strlen(A);i++){
		A[i]=tolower(A[i]);
	}
}
int main (){
	char A[51];
	gets(A);
	char B[20][30];
	int n=0;
	char *token = strtok(A, " ");
	while(token != NULL){
		strcpy(B[n], token);
		n++;
		token = strtok(NULL, " ");
	}
		chuanhoa2(B[n-1]);
	printf("%s", B[n-1]);
   char C[20][30];
	for(int i=0;i<n-1;i++){
		chuanhoa2(B[i]);
		strncpy(C[i], B[i], 1);
		printf("%s", C[i]);
	}

	printf("@ptit.edu.vn");
	
}