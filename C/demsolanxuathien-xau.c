#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main (){
	char A[1000];
	gets(A);
	for(int i=0;i<strlen(A);i++){
		A[i]=tolower(A[i]);
	}
	char B[20][50];
	int n=0;
	char *token = strtok(A, " ");
	while(token != NULL){
		strcpy(B[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	int C[1000]={0};
	for(int i=0;i<n;i++){
		if(C[i]==0){
			int cnt=1;
			for(int j=i+1;j<n;j++){
				if(strcmp(B[i], B[j])==0){
					++cnt;
					C[j]=1;
				}
			}
			printf("%s %d\n", B[i], cnt);
		}
	}
}