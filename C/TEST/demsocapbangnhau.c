#include <stdio.h>
int cnt[1000001]={0};
int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		cnt[a[i]]++;
	}
	long long tong = 0;
	for(int i = 0; i < n; i++){
		if(cnt[a[i]] > 1){
			long long k = cnt[a[i]];
		tong += (long long)k*(k-1)/2;
		cnt[a[i]]=0;
		}
	}
	printf("%lld", tong);
}