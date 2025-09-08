#include <stdio.h>
int main (){
	int n, k;
	scanf("%d%d", &n, &k);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int s = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == k){
			s = 1;
		}
	}
	if(s == 0){
		printf("NOT FOUND");
	}
	else{
		for(int i = 0; i < n; i++){
			if(a[i] == k){
				k = -1;
				continue;
			}
			printf("%d ", a[i]);
		}
	}
}