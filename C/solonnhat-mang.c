#include <stdio.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int a[n];
		for(int i=0; i<n;i++){
			scanf("%d", &a[i]);
		}
		int max=a[0];
		for(int i=0;i<n;i++){
			if(a[i]>max){
				max=a[i];
			}
		}
		printf("%d\n", max);
		for(int i=0;i<n;i++){
			if(a[i]==max){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}