#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main (){
	char A[101];
	gets(A);
	char B[20][50];
	int n=0;
	char *token = strtok(A, " ");
	while(token != NULL){
		strcpy(B[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	for(int i=0; i<n; i++){
		int s=1;
		for(int j=0; j<i; j++){
			if(strcmp(B[j], B[i]) ==0 ){
				s=0;break;
			}
		}
		if(s==1){
			printf("%s ", B[i]);
		}
	}
}