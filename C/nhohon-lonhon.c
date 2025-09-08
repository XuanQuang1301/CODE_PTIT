#include <stdio.h>

int main (){
		int n;
		scanf("%d", &n);
		int a[n];
		int b;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int cnt = 0;
		for(int i = 0; i < n; i+=2){
			if(a[i] % 2==0){
				printf("%d ", a[i]);
				cnt = 1;
			}
		}
    if(cnt == 0){
    	printf("NONE");
	}
}