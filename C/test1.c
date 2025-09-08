#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
int main (){
	char a[100];
	gets(a);
	for(int i = 0; i < strlen(a); i++){
		printf("%c", tolower(a[i]));
	}
}