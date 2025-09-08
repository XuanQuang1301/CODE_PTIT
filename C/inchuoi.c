#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
	char a[1000];
	gets(a);
	char *token = strtok(a, " ");
	char b[100][100];
	int n = 0;
	while(token != NULL){
		strcpy(b[n], token);
		token = strtok(NULL, " ");
		n++;
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(strlen(b[j]) < strlen(b[i])){
				char tmp[100];
				strcpy(tmp, b[i]);
				strcpy(b[i], b[j]);
				strcpy(b[j], tmp);
			}
			else if(strlen(b[j]) == strlen(b[i]) ){
				if(strcmp(b[j], b[i]) < 0){
				    char tmp[100];
				    strcpy(tmp, b[i]);
				    strcpy(b[i], b[j]);
				    strcpy(b[j], tmp);	
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%s\n", b[i]);
	}
}
