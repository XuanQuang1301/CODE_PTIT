#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main (){
	char A[101];
	gets(A);
	int n=0;
	char B[10][20];
	char *token = strtok(A, " ");
	while(token != NULL){
		strcpy(B[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(strcmp(B[i], B[j])== 0){
				strcpy(B[j], 1);
			}
		}
		printf("%s ", B[0]);
	}
}