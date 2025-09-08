#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct kitu{
	char A[100];
	int dem;
};
int check(char a[]){
	int l = 0, r = strlen(a) - 1;
	while(l < r){
		if(a[l] != a[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

int main(){
	struct kitu kt;
	char a[10001];
	gets(a);
	for(int i = 0; i < strlen(a); i++){
		if(isalpha(a[i]) || isdigit(a[i]) || a[i] == ' '){
			a[i] = a[i];
		}
		else {
			a[i] = ' ';
		}
	}
	for(int i = 0; i < strlen(a); i++){
		printf("%c", a[i]);
	}
	char *token = strtok(a, " ");
	char b[100][100];
	int n = 0;
	while(token != NULL){
		strcpy(b[n++].A, token);		
		token = strtok(" ", NULL);		
	}

	for(int i = 0; i < n; i++){	
	    if(check(b[i].A)){
	    	b[i].dem++;
		}	
	}
}