#include <stdio.h>

int main (){
	int t; 
	scanf("%d", &t);
	int a = 1;
	while(a<=t){
		int n, m;
		scanf("%d%d", &n, &m);
		int A[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &A[i][j]);
			}
		}
		int s;
		int max = 0;
		for(int i=0; i<n; i++){
			int tong = 0;
			for(int j=0; j<m; j++){
				tong += A[i][j];
			}
			if(tong > max){
				max = tong;
				s = i;
			}
		}
//		int b[10][10];
//		for(int i = 0; i<n; i++){
//			for(int j = 0; j < m;)
//		}
		int r;
		int max2 = 0;
		for(int i=0; i<m; i++){
			int tong = 0;
			for(int j=0; j<n; j++){
				if(j == s) continue;
				tong += A[j][i];
			}
			if(tong > max2){
				max2 = tong;
				r = i;
			}
		}
		printf("Test %d:\n", a);
		for(int i = 0; i<n; i++){
			if(i==s) continue;
			for(int j = 0; j < m; j++){
				if(j == r)
				continue;
				else
				printf("%d ", A[i][j]);
			}
			printf("\n");
		}
		a++;
	}
}