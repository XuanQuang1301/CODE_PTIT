#include <stdio.h>
int main (){
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = n - 1; i >= k - 1 ; i--){
		a[i+1] = a[i];
	}
	n++;
	a[k-1] = m;
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}