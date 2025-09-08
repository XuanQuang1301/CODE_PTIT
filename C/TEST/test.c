#include<stdio.h>
#include <string.h>
int main (){
	char a[10];
	gets(a);
	int n;
	scanf("%d", &n);
	int l = n - 1,  r = strlen(a) - 1;
	int k = 0;
	while(l<=r){
		if(a[l] != a[r]){
			printf("NO\n");
			k = 1;
			break;
		}
	}
	if(k==0) printf("YES\n");
}