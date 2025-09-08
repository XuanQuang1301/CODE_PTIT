#include <stdio.h>
#include <math.h>
long long snt(long long n){
	if(n==0||n==1) return 0;
	else {
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}}
	
	return 1;
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
		long long n, m;
		scanf("%lld %lld", &n, &m);
		int s=0;
		for(int i=sqrt(n);i<=sqrt(m);i++){
			if(snt(i)){
				s++;
			}
		}
		printf("%lld\n", s);
	}
}