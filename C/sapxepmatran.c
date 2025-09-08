#include <stdio.h>

int main (){
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		int a, b;
		scanf("%d%d", &a, &b);
		int A[a][b];
		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				scanf("%d", &A[i][j]);
			}
		}
		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				
				for(int p = i; p < a; p++){
					if(p==i){
						for(int q = j + 1; q < b; q++){
						   if(A[p][q] < A[i][j]){
						   	int cmp = A[i][j];
						   	A[i][j] = A[p][q];
						   	A[p][q] = cmp;
						   }
					    }
					}
					else{
						for(int q = 0; q < b; q++){
						   if(A[p][q] < A[i][j]){
						   	int cmp = A[i][j];
						   	A[i][j] = A[p][q];
						   	A[p][q] = cmp;
						   }
					    }
					}
					
				}
				
			}
		}
		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				printf("%d ", A[i][j]);
			}
			printf("\n");
		}
	}
}