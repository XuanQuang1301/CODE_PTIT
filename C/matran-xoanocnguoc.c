#include <stdio.h>
#include <math.h>
int main (){
	int t;scanf("%d", &t);
	int i=1;
	while(i<=t){
		int n;scanf("%d", &n);
		int A[n][n];
		int cnt=pow(n, 2);
		int h1=0, h2=n-1, c1=0, c2=n-1;
		while(h1<=h2 && c1<=c2){
			for(int i=c1;i<=c2;i++){
				A[h1][i]=cnt;
				--cnt;
			}
			++h1;
			for(int i=h1;i<=h2;i++){
				A[i][c2]=cnt;
				--cnt;
			}
			--c2;
			if(c1<c2){
				for(int i=c2;i>=c1;i--){
					A[h2][i]=cnt;
					--cnt;
				}
				--h2;
			}
			for(int i=h2;i>=h1;i--){
				A[i][c1]=cnt;
				--cnt;
			}
			++c1;
		}
		printf("Test %d\n:", i);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ", A[i][j]);
			}
			printf("\n");
		}
		i++;
	}
}