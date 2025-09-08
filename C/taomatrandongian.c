#include <stdio.h>
int main (){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("0 ");
		}
		for(int j=0;j<n-i-1;j++){
			printf("%d ", j+1);
		}
		printf("\n");
	}
}