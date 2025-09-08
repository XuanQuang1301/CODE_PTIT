#include <stdio.h>
int snt(int n ){
	for(int i = 2; i*i <= n; i++){
		if(n%i == 0) return 0;
	}
	return n>1;
}
int main (){
	int n;scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int duoi = 0;
	for(int i = 1; i < n; i++){
		for(int j = i - 1; j < i; j++){
			if(snt(a[i][j])){
				duoi++;
			}
		}
	}
	int tren = 0;
	for(int i = 0; i < n-1; i++){
		for(int j = i + 1; j < n; j++){
			if(snt(a[i][j])){
				tren++;
			}
		}
	}
	if(duoi < tren ) printf("28teach");
	else if(duoi > tren) printf("29teach");
	else printf("30teach");
}