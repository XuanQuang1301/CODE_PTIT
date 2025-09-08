#include <stdio.h>
#include <math.h>
int main (){
	int n, m;scanf("%d %d", &n, &m);
	int a[n];
	int b[m];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d", &b[i]);
    }
    int k;scanf("%d", &k);
    for (int i = n - 1; i >= k; i--) {
        a[i + m] = a[i];
    }

    for (int i = 0; i < m; i++) {
        a[i + k] = b[i];
    }
     n+=m;
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
 }