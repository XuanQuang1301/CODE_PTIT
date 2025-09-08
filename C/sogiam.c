#include<stdio.h>
#include <math.h>
long long khongGiam(long long n){
	int a=0, b=0;
	while(n>=10){
		a=n%10;
		b=(n/10)%10;
		if(b<=a) return 0;
		n/=10;
	}
		return 1;
}
		int main (){
			int t;scanf("%d",&t);
			while(t--){
				long long a, b;
				int n=0;
				scanf("%lld %lld", &a, &b);
				for(int i=a;i<=b;i++){
					if(khongGiam(i)){
						n++;
					}
				}
					printf("%d\n", n);
			}
			return 0;
			}		
