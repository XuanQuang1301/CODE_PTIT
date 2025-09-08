#include <stdio.h>
long long snt(long long n){
	long long  res=1;
	for(long long i=2;i*i<=n;i++){
		while(n%i==0){
			res=i;
			n/=i;
		}
	}
	if(n!=1) return n;
 return res;
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		printf("%lld\n", snt(n));
	}
}