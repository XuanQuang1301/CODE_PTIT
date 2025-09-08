#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main (){
	int t;scanf("%d", &t);
	getchar();
	while(t--){
		char A[1000];
		gets(A);
		char B[1000], n=0;
		char *token = strtok(A, " ");
		while(token!= NULL){
			strcpy(B[n], token);
			n++;
			token = strtok(NULL, " ");
		}
		int chan=0, le=0;
		for(int i=0;i<n;i++){ 
			if(B[i]%2==0){
				chan++;
			}
			else le++;
		}
		for(int i=0;i<n;i++){
			printf("%s\n", B[i]);
		}
	}
}
