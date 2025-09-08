#include <stdio.h>
int kt(int n){
	for(int i = 2; i*i <= n; i++){
		if(n % i ==0) return 0;
	}
	return n>1;
}
int main (){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int hang, cot;
	int maxh = -1e9;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(kt(a[i][j])) ++cnt;
		}
		if(cnt >= maxh){
			maxh = cnt;
			hang = i;
		}
	}
	int maxc = -1e9;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(kt(a[j][i])) cnt++;
		}
		if(cnt >= maxc){
			maxc = cnt;
			cot = i;
		}
	}
	for(int i = 0; i < n; i++){
		if(i == hang) continue;
		for(int j = 0; j< n; j++){
			if(j == cot) continue;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}