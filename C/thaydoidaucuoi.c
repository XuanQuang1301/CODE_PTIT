#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char A[1000];
	gets(A);
	char B;
	B = A[0];
	A[0]=A[strlen(A)-1];
	A[strlen(A)-1]=B;
	for(int i=0;i<strlen(A);i++){
		printf("%c", A[i]);
	}
}