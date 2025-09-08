#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main (){
	char a[100000];
	gets(a);
	for(int i = 0; i < strlen(a); i++){
		int cnt = 1;
		while(a[i] == a[i+1]){
			cnt++;
			i++;
		}
		printf("%c%d", a[i], cnt);
	}
}