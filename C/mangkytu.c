#include <stdio.h>
#include <string.h>
int  kt(char A[]){
	if(strlen(A) % 2 != 0) return 0;
	int a[100] = {0}, b[100] = {0};
	for(int i = 0; i < strlen(A); i++){
		if(A[i] == '(' ) a[0]++;
		if(A[i] == ')' ) b[0]++;
		if(A[i] == '[' ) a[1]++;
		if(A[i] == ']' ) b[1]++;
		if(A[i] == '{') a[2]++;
		if(A[i] == '}') b[2]++;
		if(A[i] == '\'') a[3]++;
		if(A[i] == '\'') b[3]++;
		if(A[i] == '\"') a[4]++;
		if(A[i] == '\"') b[4]++;
	}
	for(int i = 0; i <= 3; i++){
		if(a[i] !=b[i]){
			return 0;
		}
	}
	return 1;
}
int main (){
	char a[100];
	gets(a);
	if(kt(a)) printf("1");
	else printf("0");
}
