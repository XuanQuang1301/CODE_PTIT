#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main (){
	char a[1000];
	gets(a);
	for(int i = 0; i < strlen(a); i++){
		int t = 1;
		for(int j = 0; j < i; j++){
			if(a[i] == a[j]){
				t = 0;
				break;
			}
		}
		if(t == 1) printf("%c", a[i]);
	}
}