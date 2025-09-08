#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void ch(char a[]){
	a[0] = toupper(a[0]);
	for(int i = 1; i<strlen(a); i++){
		a[i] = tolower(a[i]);
	}	
}

int main (){
	int t; 
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[100];
		gets(a);
		char b[50][100];
		int n = 0; 
		char *token = strtok(a, " ");
		while(NULL != 0){
			strcpy(b[n], token);
			n++;
			token = strtok(NULL, " ");
		}
	
		for(int i = 0; i < n; i++){
				ch(b[i]);
			printf("%s ", b[i]);
		}
		
	}
}