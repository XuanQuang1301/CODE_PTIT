#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main (){
	char a[19];
	gets(a);
	int cnt[1000]={0};
	for(int i = 0; i < strlen(a); i++){
		a[i] = isdigit(a[i]);
		cnt[a[i]]++;
		
	}
	for(int i = 0; i < strlen(a); i++){
		if(cnt[a[i]] > 0){
			printf("%s %d\n", a[i], cnt[a[i]]);
			cnt[a[i]]=0;
		}
	}
}