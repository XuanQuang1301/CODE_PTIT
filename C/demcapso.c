#include <stdio.h>
#include <math.h>
int kt(long long n){
	long long a = 0, b = 1;
	if(n == 0 || n == 1) return 1;
	for(long long i = 0; i <= n; i++){
		long long c = a + b;
		if(c == n){
			return 1;
			break;
		}
		if(c > n){
			break;
		}
		a = b;
		b = c;
	}
	return 0;
}
int main (){
	int n;
	scanf("%d", &n);
	long long a[n];
	for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(kt(a[i])){
			printf("%lld ", a[i]);
			cnt = 1;
		}
	}
	if(cnt == 0){
		printf("NONE");
	}
}