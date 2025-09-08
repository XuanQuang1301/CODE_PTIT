#include <stdio.h>
#include <math.h>
long long giaiThua(long long n){
	long long giaithua =1;
	if(n==1||n==0) return giaithua;
	else 
	for(int i=n;i>1;i--){
		giaithua*=i;
		}
		return giaithua;}
	int main (){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		if(b>1){
		long long m = pow(2,b);
		if(giaiThua(a) % m == 0) printf("Yes");
		else printf("No");}
		return 0;}

