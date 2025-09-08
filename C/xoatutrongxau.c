#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int xoa(char a[], char b[]){
	int n = strlen(a);
	int m = strlen(b);
	if(n!=m) return 1;
	for(int i = 0; i < n; i++){
		if(tolower(a[i]) != tolower(b[i])){
			return 1;
		}
	}
	return 0;
}
int main (){
	int t;
	scanf("%d", &t);
	getchar();
	for(int i = 1; i <= t; i++){
		char a[201];
		gets(a);
		char b[20];
		scanf("%s", b);
		char *token = strtok(a, " ");
		printf("Test %d: ", i);
		while(token != NULL){
			if(xoa(token, b) == 1){
				printf("%s ", token);
			}
			token = strtok(NULL, " ");
		}
		printf("\n");
	}
}