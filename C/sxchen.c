#include <stdio.h>

int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int t = 0;
	printf("Buoc %d: %d\n", t, a[0]);
	for(int i = 1; i < n; i++){
		int x = a[i], cmp = i - 1;
		while(cmp >= 0 && x > a[cmp]){
			a[cmp+1] = a[cmp];
			cmp--;
		}
		a[cmp+1] = x;
		t++;
		printf("Buoc %d: ", t);
		for(int i = 0; i <= t; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}