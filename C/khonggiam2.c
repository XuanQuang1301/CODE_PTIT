#include <stdio.h>
#include <math.h>
long long soKhonggiam(long long n){
	int a=0, b=0;
	while(n!=0){
		a=n%10;
		b=(n/10)%10;
		if(a<b) return 0;
		n/=10;
	}
	return 1;}
	int main (){
		int t;scanf("%d", &t);
		while(t--){
			 int n;
			 scanf("%d", &n);
			 int a=pow(10,n-1);
			 int b=pow(10,n)-1;
			for(int i=a;i<=b;i++){
				if(soKhonggiam(i)) printf("%d ", i);
				}
				printf("\n");
		}
	}
