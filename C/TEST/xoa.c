#include <stdio.h>
#include <string.h>
int check(char a[]){
	int b[6]={0};
	for(int i = 0; i < strlen(a); i++){
		if(a[i] == 'p') b[0]++;
		if(a[i] == 'y') b[1]++;
		if(a[i] == 't') b[2]++;
		if(a[i] == 'h') b[3]++;
		if(a[i] == 'o') b[4]++;
		if(a[i] == 'n') b[5]++;
	}
	int cnt = 0;
	for(int i = 0; i < 6; i++){
		if(b[i] > 0) cnt++;
	}
	if(cnt < 6) printf("NO");
	else printf("YES");
}
int main (){
	char a[1001];
	gets(a);
	check(a);
}