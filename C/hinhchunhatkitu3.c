#include<stdio.h>
#include <string.h>
int main (){
	int n, m;scanf("%d%d", &n, &m);
	if(n<=m){
		for(int i=1;i<=n;i++){
			int s=i;
			for(int j=1;j<=m;j++){
				if(i==1){
					printf("%c", 63+s);
					s++;
				}
				else{
					if(j<m-i+1){
						printf("%c", 63+s);
						s++;
					}
					else printf("%c", 63+s);
				}
			}
			printf("\n");
		}
	}
	else if(n>m) {
		for(int i=1;i<=n;i++){
			int s=i;
			for(int j=1;j<=m;j++){
				if(i==1){
					printf("%c", 63+s);
					s++;
				}
				else if(i>m){
					printf("%c", 63+m);
				}
				else {
					if(j<m-i+1){
						printf("%c", 63+s);
						s++;
					}
					else printf("%c", 63+s);
				}
			}
			printf("\n");
		}
	}
}