#include <stdio.h>
#include <math.h>
#include <string.h>
int main (){
	char a[101];
	gets(a);
	long long tong = 0;
	for(int i = 0; i < strlen(a); i++){
		if(a[i] == '1'){
			tong += pow(2, strlen(a) - i - 1);
		}
	}
	printf("%lld", tong);
}