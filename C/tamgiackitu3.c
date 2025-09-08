#include <stdio.h>
#include <string.h>
int main (){
	int n;scanf("%d", &n);
	for(int i=1;i<=n;i++){
		int cnt=i;
		int s=n-1;
		for(int j=1;j<=i;j++){
			if(j==1){
			printf("%c ", 64+i);
		}
		else if(i>1){
			cnt+=s;
			printf("%c ",64+cnt);
			s--;
		}
	}
		printf("\n");
	}
	
}