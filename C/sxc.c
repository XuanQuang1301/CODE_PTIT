#include <stdio.h>
 //Sap xep chon
int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		int s = i;
		for(int j = n - i; j > i ; j--){
			if(a[j] < a[s]){
				s = j;
			}
		}
		int cmp = a[i];
		a[i] = a[s];
		a[s] = cmp;
		for(int i = 0; i < n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}