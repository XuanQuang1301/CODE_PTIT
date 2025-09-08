#include <stdio.h>
int main (){
	int t ;scanf("%d", &t);
	int i=1;
	while(i<=t){
		int n;scanf("%d", &n);
		int A[n][n];
		for(int i=0;i<n;i++){
			int s=1;
			for(int j=0;j<n;j++){
				if(j<=i){
				A[i][j]=s;
				s++;}
				else A[i][j]=0;
			}
		}
		int B[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				B[i][j]=0;
				B[i][j]=A[j][i];
			}
		}
		int C[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				C[i][j]=0;
				for(int k=0;k<n;k++){
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