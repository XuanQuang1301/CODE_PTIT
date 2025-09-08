#include <stdio.h>
int main (){
	int n, m;scanf("%d%d", &n, &m);
	if(n>=m){
	for(int i=n;i>=1;i--){
		int s=i;
		for(int j=1;j<=m;j++){
			if(j<=i){
				printf("%d", s);
				if(j==i) continue;
				s--;
			}
			else{
				
				printf("%d", ++s);
			}
		}
		printf("\n");
	}
}
else {
	for(int i=1;i<=n;i++){
		int s=m-i+1;
		for(int j=1;j<=m;j++){	
			if(j<=m-i+1){
				printf("%d", s);
				if(j==m-i+1) continue;
				s--;
			}
			else{
				
				printf("%d", ++s);
			}
		}
		printf("\n");
	}
}
}