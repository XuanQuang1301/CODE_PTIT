#include <stdio.h>
int snt(int n){
	for(int i = 2; i*i <= n; i++){
		if(n%i==0) return 0;
	}
	return n > 1;
	
}
int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int F[1000], cnt = 0;
	for(int i = 0; i < n; i++){
		if(snt(a[i])){
			cnt++;
			F[i] = cnt;
		}
	}
	int q;
	scanf("%d", &q);
	while(q--){
		int l, r;
		scanf("%d%d", &l, &r);
		if(l == 0) printf("%d", F[r]);
		else printf("%d", F[r] - F[l - 1]);
	}
}