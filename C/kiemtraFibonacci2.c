#include <stdio.h>
int fibo(long long n){
	if(n==0||n==1) return 1;
	else {
		long long f0=1, f1=1;
		for(int i=0;i<n;i++){
			long long f=f0+f1;
			if(f>n){
				break;;
			}
			if(f==n) return 1;
			f0=f1;
			f1=f;
		}
		return 0;
	}
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
		long long n;scanf("%lld", &n);
		if(fibo(n)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}