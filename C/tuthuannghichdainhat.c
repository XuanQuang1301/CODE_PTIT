#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (){
	char a[1000];
	while(scanf("%s ", &a)!='\n');
	printf("%s", a);
}