#include <stdio.h>
int kt(int n){
	for(int i = 2; i*i <= n; i++){
		if(n%i==0) return 1;
	}
	return 0;
}
int kt1(int n){
	int cnt = 0;
	while(n){
		cnt += n%10;
		n/=10;
	}
	return cnt;
}
int kt2(int n){
	int cnt = 0;
	for(int i = 2; i*i <= n; i++){
		if(n%i==0){
			while(n%i==0){
				cnt += kt1(i);
				n/=i;
			}
		}
	}
	if(n>1) cnt+=kt1(n);
	return cnt;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long tongso = kt1(n), tonguoc = kt2(n);
		if(tongso == tonguoc && kt(n)) printf("YES\n");
		else printf("NO\n");
	}
}