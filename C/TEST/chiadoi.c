#include <stdio.h>
int kt1(int n){
	for(int i = 2; i*i <= n; i++){
		if(n%i==0) return 0;
	}
	return n > 1;
}

int kt2(int n){
	int a[100001];
	int cnt = 0;
	while(n != 0){
		a[cnt] = n%10;
		cnt++;
		n/=10;
	}
	if(cnt % 2 == 0){
		int dau = 0;
		for(int i = cnt - 1; i >= cnt/2; i--){
			dau = dau*10 + a[i];
		}
		int cuoi = 0;
		for(int i = cnt/2 - 1; i >= 0; i--){
			cuoi = cuoi*10 + a[i];
		}
		if(kt1(dau+cuoi)) return 1;
		return 0;
	}
	else{
		int dau = 0;
		for(int i = cnt - 1; i >= cnt/2 + 1; i--){
			dau = dau*10 + a[i];
		}
		int cuoi = 0;
		for(int i = cnt/2 - 1; i >= 0; i--){
			cuoi = cuoi*10 + a[i];
		}
		if(kt1(dau+cuoi)) return 1;
		return 0;
	}
}
int main (){
	int n;
	scanf("%d", &n);
	for(int i = 1; i < n; i++){
		if(kt2(i)) printf("%d ", i);
	}
}