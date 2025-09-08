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
			long long n;scanf("%lld", &n);
			if(soKhonggiam(n)){
				printf("YES\n");
				}
				else printf("NO\n");}}
