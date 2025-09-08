#include <stdio.h>
#include <string.h>
int main (){
	int n;scanf("%d", &n);
	for(int i=1;i<=n;i++){
		int s=i*2-1;
		for(int j=1;j<=n-i+1;j++){
			printf("%c", 64+s);
			s+=2;
		}
		printf("\n");
	}
}