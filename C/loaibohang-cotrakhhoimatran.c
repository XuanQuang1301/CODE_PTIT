#include <stdio.h>
int main (){
	int t;scanf("%d", &t);
	int i=1;
	while(i<=t){
		int n, m;
		scanf("%d %d", &n, &m);
		int a[n][m];
		int s=0;
		for(int i=0; i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d", &a[i][j]);		
			}
		}
		printf("Test %d:\n", i);
		for(int i=1;i<n;i++){
			for(int j=1;j<m;j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		i++;	
	}
}