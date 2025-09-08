#include <stdio.h>
#include <string.h>
int main (){
	char a[101];
	gets(a);
	char b[10];
	scanf("%c", b);
	char *token =strtok(a, " ");
	while(token != NULL){
		if(strcmp(token , b)!=0 ){
			printf("%s ", token);
		}
		token = strtok(NULL, " ");
	}
}