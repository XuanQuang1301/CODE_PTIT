#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main (){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char A[500];
		gets(A);
		char B[500];
		gets(B);
		int c = isdigit(A[0])+isdigit(B[0]);
		printf("%d", c);
	}
}