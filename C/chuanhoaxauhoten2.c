#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void chuanhoa1(char A[]){
	for(int i=0;i<strlen(A);i++){
		A[i]=toupper(A[i]);
	}
}
void chuanhoa2(char A[]){
	A[0]=toupper(A[0]);
	for(int i=1;i<strlen(A);i++){
		A[i]=tolower(A[i]);
	}
}
int main (){
	int t;scanf("%d", &t);
	getchar();
	while(t--){
		char A[51], B[20][30];
		gets(A);
		int n=0;
		char *token = strtok(A, " ");
		while(token != NULL){
			strcpy(B[n], token);
			n++;
			token = strtok(NULL, " ");
		}
		for(int i=1;i<n;i++){
			chuanhoa2(B[i]);
			printf("%s", B[i]);
			if(i<n-1){
				printf(" ");
			}
			else if(i == n-1){
				printf(", ");
			}
		}
		chuanhoa1(B[0]);
		printf("%s", B[0]);
		printf("\n");
	}
}