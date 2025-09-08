#include <stdio.h>
#include <string.h>
int check(char a[]){
	if(strlen(a) % 2==0) return 0;
	if(a[0] == a[1]) return 0;
	int r = a[0] - '0';
	for(int i = 0; i < strlen(a); i+=2){
		if(a[i]-'0' != r) return 0;
	}
	return 1;
}
int main (){
	int n;
	scanf("%d", &n);
	getchar();
	while(n--){
		char a[501];
		gets(a);
		if(check(a)) printf("YES\n");
		else printf("NO\n");
	}
}