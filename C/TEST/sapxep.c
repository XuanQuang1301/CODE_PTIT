#include <stdio.h>
int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n - 1; i++){
		int t = 0;
		for(int j = 0; j < n - 1; j++){
			if(a[j] > a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
				t = 1;
			}
		}
		if(t == 0) break;
			printf("Buoc %d: ", i+1);
			for(int j = 0; j < n; j++){
				printf("%d ", a[j]);
			}
			printf("\n");
	}
}