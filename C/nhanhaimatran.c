#include <stdio.h>
int main (){
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int A[n][m];
	int B[m][k];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &A[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			scanf("%d", &B[i][j]);
		}
	}
	int C[n][k];
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			C[i][j]=0;
			for(int x=0;x<m;x++){
				C[i][j]+=A[i][x]*B[x][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
}