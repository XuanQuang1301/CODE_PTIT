#include<stdio.h>
#include<string.h>
int main (){
	int n, m;
	scanf("%d%d", &n, &m);
	if(n<=m){
	  for(int i=1;i<=n;i++){
		int s=m;
		for(int j=1;j<=m;j++){
			if(i==1){
				printf("%c",96+ s);
			}
			else if(i>=j){
				printf("%c", 96+s);
				if(j+1>i){
					continue;
				}
				s-=1;
			}
			else printf("%c", 96+s);
		}
		printf("\n");
	  }
    }
    else {
    	for(int i=1;i<=n;i++){
		int s=n;
		for(int j=1;j<=m;j++){
			if(i==1){
				printf("%c", 96+s);
			}
			else if(i>=j){
				printf("%c",96+ s);
				if(j+1>i){
					continue;
				}
				s-=1;
			}
			else printf("%c", 96+s);
		}
		printf("\n");
	  }
    }
	}