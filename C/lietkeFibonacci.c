#include <stdio.h>
int kt(int n){
	int n2=0,n1=1;
	printf("0 1 ");
	for(int i=3;i<=n;i++){
		long long n0=n2+n1;
		printf("%d ", n0);
		n2=n1;
		n1=n0;
		}}
		int main (){
			int n;scanf("%d", &n);
			kt(n);}
				
