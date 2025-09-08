#include <stdio.h>
#include <string.h>
#include <ctype.h>
void chuan(char a[]){
	a[0] = toupper(a[0]);
	for(int i = 1; i < strlen(a); i++){
		a[i] = tolower(a[i]);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[81];
		gets(a);
		char b[50][50];
		int n = 0;
		char *token = strtok(a, " ");
		while(token!= NULL){
			strcpy(b[n++], token);
			token = strtok(NULL, " ");
		}
		for(int i = 0; i < n; i++){
			chuan(b[i]);
			printf("%s ", b[i]);
		}
		printf("\n");
	}
}