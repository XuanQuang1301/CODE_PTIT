#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main (){
	char a[100];
	gets(a);
	int cnt1=0, cnt2=0;
	for(int i=0;i<strlen(a); i++){
		if(isalpha(a[i])) cnt1++;
		else if(isdigit(a[i])) cnt2++;
	}
	printf("%d %d %d", cnt1, cnt2, strlen(a)-cnt1-cnt2);
}