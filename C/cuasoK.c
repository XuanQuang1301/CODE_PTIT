#include <stdio.h>
int main (){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
    for(int i = 0; i <= n - m; i++){
    	int t = 0;
    	for(int j = i; j < i + m ; j++){
    		t+=a[j];
		}
		printf("%d ", t);
	}
}