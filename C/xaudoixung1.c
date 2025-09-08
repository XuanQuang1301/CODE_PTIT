#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int kt(char A[]){
	int l = 0, r = strlen(A)-1;
	int cnt = 0;
	while(l < r){
		if(A[l] != A[r]){
			cnt++;
		}
		l++;
		r--;
	}
	if(cnt <= 1){
		printf("YES\n");
	}
	else printf("NO\n");
}
int main (){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char A[21];
		gets(A);
		kt(A);
	}
}