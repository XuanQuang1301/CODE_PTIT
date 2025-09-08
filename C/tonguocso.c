#include <stdio.h>
#include <math.h>
int snt(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int tong(int n){
	long long sum = 0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			sum+=i;
			n/=i;
		}
		}
	if(n>1 && snt(n)) sum += n;
	return sum;
}
int main (){
	int t;scanf("%d", &t);
	long long sum = 0;
	while(t--){
		int n;
		scanf("%d", &n);
			sum += tong(n);
	}
	printf("%lld", sum);
}
