#include <stdio.h>
#include <string.h>
int main (){
	int n;scanf("%d", &n);
	for(int i=1;i<=n;i++){
		int s;
	//	if(i==1) s=n+1;
		 s=n-i+1;
		for(int j=1;j<=n-i+1;j++){
			printf("%c", 63+s);
			s++;
		}
		printf("\n");
	}
}