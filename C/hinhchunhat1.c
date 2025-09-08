#include <stdio.h>
#include <string.h>
int main (){
	int n, m;
	scanf("%d%d", &n, &m);
	if(n<=m){
	for(int i=1;i<=n;i++){
		int s=i;
        int r=m-i+1;
		for(int j=1;j<=m;j++){
			if(j<=m-i+1){
				printf("%c",64+ s);
				if(j==m-i+1) {
				continue;}
				s++;
			}
			else{
				
				printf("%c", 64+s-r);
				r++;
			}
		}
		printf("\n");
	}
}
else {
	for(int i=1;i<=n;i++){
		int s=i;
        int r=m-i+1;
        int k=m;
		for(int j=1;j<=m;j++){
			if(i>m){
				
				printf("%c", 64+k);
				k--;
			}
			else
			  if(j<=m-i+1){
				printf("%c", 64+s);
				if(j==m-i+1) {
				continue;}
				s++;
			}
			 else{
				
				printf("%c", 64+s-r);
				r++;
			}
		} 
		
		printf("\n");
		}
	}
}