#include <stdio.h>
#include <string.h>
#include <math.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long A[n];
		for(int i=0;i<n;i++){
			scanf("%lld", &A[i]);
		}
		long long sum1=0, sum2 =0;
		for(int i=0;i<n;i++){
		sum1 += A[i];
		if(sum1 > sum2){
			sum2 = sum1;
		}
		if(sum1<0) sum1 = 0;
		}
		printf("%lld\n", sum2);
	}
}