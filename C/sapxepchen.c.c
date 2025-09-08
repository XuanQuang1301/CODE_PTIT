#include <stdio.h>
int main (){
	int n;scanf("%d", &n);
	int A[n];
	int t = 0;
	for(int i=0;i<n;i++){
		scanf("%d", &A[i]);
    }
    printf("Buoc %d: %d\n", t, A[0]);
	for(int i=1;i<n;i++){
		
		int x = A[i], cmp = i - 1;
		while(cmp >= 0 && x < A[cmp]){
			A[cmp+1]=A[cmp];
			--cmp;
		}
			A[cmp+1]=x;
		t++;
		printf("Buoc %d: ", t);	
		for(int j=0;j<=t;j++){
			printf("%d ", A[j]);
		}	
		printf("\n");
	}
//	for(int i=0;i<n;i++){
//		printf("%d", A[i]);
//	}
}