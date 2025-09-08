#include <stdio.h>
#include <string.h>
int uoc(int a, int b){
	while(b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
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
		if(strlen(a) % 2 != 0) printf("INVALID\n");
		else{
			int n = strlen(a)/2;
			int left = 0, right = 0;
			for(int i = 0;  i < n; i++){
				left = left*10 + (a[i] - '0');
			}
			for(int i = n; i < strlen(a); i++){
				right = right*10 + (a[i] - '0');
			}
			printf("%lld\n",boi(left, right));
		}
	}
}