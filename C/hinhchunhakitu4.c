#include <stdio.h>
#include <string.h>
int main (){
	int n, m;
	scanf("%d%d", &n, &m);
	if(n<=m){
		for(int i=n;i>=1;i--){
			int s=i;
			for(int j=1;j<=m;j++){
				if(j<=m-i){
				printf("%c", 64+s);
				s++;	
				}
				else printf("%c", 64+s);
			}
			printf("\n");
		}
	}
	else if(m<n) {
		for(int i=n;i>=1;i--){
			int s=i;
			for(int j=1;j<=m;j++){
				if(i>=m){
				printf("%c",64+ m);	
				}
				else{
					if(j<=m-i){
				 printf("%c", 64+s);
				 s++;
				 }
				 else printf("%c", 64+s);
				}
			}
			printf("\n");
		}
	}
}