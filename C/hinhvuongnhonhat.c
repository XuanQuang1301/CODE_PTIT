#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int uoc(int n, int m){
	while(m!=0){
		int r = n % m;
		n = m;
		m = r;
	}
	return n;
}
int boi(int n, int m){
	return n*m/uoc(n, m);
}
int main (){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[19];
		gets(a);
		
		if(strlen(a)%2!=0){
			printf("INVALID\n");
		}
		else{
		    int dau = 0, cuoi = 0;
			for(int i = 0; i < strlen(a)/2; i++){
				dau = dau*10 + (a[i]-'0');
			}
			for(int i = strlen(a)/2; i < strlen(a); i++){
				cuoi = cuoi*10 + (a[i]-'0');
			}
			printf("%d\n", boi(dau, cuoi));
		}
	}
}