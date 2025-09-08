#include <stdio.h>
#include <string.h>
int main (){
	int n;scanf("%d", &n);
	for(int i=1;i<=n;i++){
		int s=1;
		for(int j=1;j<=i*2-1;j++){
			if(j<i){
				printf("%c",63+ s);
				s+=2;
			}
			else{
			 printf("%c", 63+s); 
			 s-=2; 
		}
		}
		printf("\n");
	}
}