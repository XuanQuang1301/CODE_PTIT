#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void ch(char a[]){
	for(int i = 0; i<strlen(a); i++){
		a[i] = tolower(a[i]);
	}
}

int main (){
	char a[100];
	gets(a);
	char *token = strtok(a, " ");
	char b[50][50];
	int s=0;
	while(token != NULL){
		strcpy(b[s], token);
		s++;
		token = strtok(NULL, " ");
	}
	ch(b[s-1]);
	printf("%s",b[s-1]);
	for(int i = 0; i<s-1; i++){
		ch(b[i]);
		printf("%s", b[i]);
	}
	printf("@28teach.com.vn");
}