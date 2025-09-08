#include <stdio.h>
#include <string.h>
int main (){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++){
		int s=i;
		for(int j=1;j<=m;j++){
		 //  if()
			if(j<m-i+1){
				printf("%d", s);
				s++;
			}
			else if(j>=m-i+1){
			  printf("%d", s);s--;
		   }
		}
		printf("\n");
	}
}