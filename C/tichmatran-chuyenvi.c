#include <stdio.h>
int main (){
	int t;scanf("%d", &t);
	int i=1;
	while(i<=t){
		int n, m;
		scanf("%d%d",&n, &m );
		int A[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&A[i][j] );
			}
		}
		int B[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				B[i][j]=A[j][i];
			}
		}
		int C[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				C[i][j]=0;
				for(int k=0;k<m;k++){
					C[i][j]+=A[i][k]*B[k][j];
				}
			}
		}
		printf("Test %d:\n", i);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ", C[i][j]);
			}
			printf("\n");
		}
		i++;
	}
}