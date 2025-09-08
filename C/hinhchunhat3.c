#include <stdio.h>
int main (){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++){
		int s=i;
		int k=2;
		for(int j=1;j<=m;j++){
			if(j<=i){
				printf("%d", s);
				s--;
			}
			else {
				printf("%d", k);
				k++;
			}
		}
		printf("\n");
	}
}