#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
	char a[1001];
	gets(a);
	long long t = 0;
	for(int i = strlen(a)-2; i < strlen(a); i++){
		t = t*10 + (a[i] - '0');
	}
	printf("%d", t);
	if(t == 0 || t % 25 ==0)  printf("YES");
	else printf("NO");
}