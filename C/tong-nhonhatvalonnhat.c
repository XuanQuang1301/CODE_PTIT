#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
long long max(char A[]){
	long long n=0;
	for(int i=0;i<strlen(A);i++){
		if( A[i]-'0' == 5){
			A[i] = '6';
		}
		n = n * 10 + (A[i]-'0');
	}
	return n;
}
long long min(char A[]){
	long long n = 0;
	for(int i = 0;i < strlen(A); i++){
		if( A[i]-'0' == 6){
			A[i] = '5';
		} 
		n = n * 10 + ( A[i] - '0' );
	}
	return n;
}
int main (){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char A[100];
		char B[100];
		scanf("%s %s",A , B);
	     long long nho = min(A) + min(B);
	     long long lon = max(A) + max(B);
	printf("%lld %lld\n", nho, lon);
	}
}