#include <stdio.h>
int kt(int n){
	for(int i = 2; i*i<=n;i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
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
	int max1 = 0;
	int hang;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(kt(a[i][j])){
				cnt++;
			}
		}
		if(cnt >= max1){
			max1 = cnt;
			hang = i;
		}
	}
	int max2 = 0;
	int cot;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(kt(a[j][i])){
				cnt++;
			}
		}
		if(cnt >= max2){
			max2 = cnt;
			cot = i;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i== hang || j == cot){
			 continue;}
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}