#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (){
	int n;
	scanf("%d", &n);
	char a[n*2-1];
	gets(a);
	int cnt[1000]={0};
	for(int i = 0; i < strlen(a); i++){
		cnt[a[i]-'0']++;
	}
	for(int i = 0; i <= 9; i++){
		printf("%d %d\n", i, cnt[i]);
	}
}