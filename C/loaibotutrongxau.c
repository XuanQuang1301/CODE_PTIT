#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main (){
	char A[101];
	gets(A);
	char B[100];
	scanf(" %s", B);
	char *token = strtok(A, " ");
	while(token != NULL){
		if(strcmp(token, B) != 0){
			printf("%s ", token);
		}
		token = strtok(NULL, " ");
	}
}