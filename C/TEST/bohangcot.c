#include <stdio.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	if(n >= m){
		int tmp = n - m;
		for(int i = 0; i < n; i++){
			if(i+1 % 2 != 0 && tmp > 0){
				tmp--;
				continue;
			}
			else
			for(int j = 0; j < m; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	else if(m > n){
		int tmp = m - n;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(j+1 %2 == 0 && tmp >0){
					tmp--;
					continue;
				}
				else{
					printf("%d ", a[i][j]);
				}
			}
			printf("\n");
		}
	}
}