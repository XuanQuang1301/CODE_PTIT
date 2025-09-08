#include<stdio.h>
#include<math.h>
long long uoc(long long a, long long b){
	int s=0;
	while(b!=0){
		s=a%b;
		a=b;
		b=s;
	}
	return a;
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		long long bcnn=1;
		for(int i=1;i<=n;i++){
			bcnn=i*bcnn/uoc(i, bcnn);
		}
		printf("%lld\n", bcnn);
	}
}