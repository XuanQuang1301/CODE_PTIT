#include <stdio.h>
int main(){
	int m, n, p, q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	int A[m][n], B[n][p], C[p][q];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &A[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			scanf("%d", &B[i][j]);
		}
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			scanf("%d", &C[i][j]);
		}
	}
	int E[m][p];
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			E[i][j]=0;
			for(int x=0;x<n;x++){
				E[i][j]+=A[i][x]*B[x][j];
			}
		}
	}
	int D[m][q];
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			D[i][j]=0;
			for(int x=0;x<p;x++){
				D[i][j]+=E[i][x]*C[x][j];
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			printf("%d ", D[i][j]);
		}
		printf("\n");
	}
	
}