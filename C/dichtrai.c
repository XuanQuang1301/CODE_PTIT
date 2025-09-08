#include <stdio.h>
int main (){
	int n;scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int k;scanf("%d", &k);
	int b[k];
	for(int i=0;i<k;i++){
		b[i]=a[i];
	}
	for(int i=0;i<n-k;i++){
		a[i]=a[i+k];
	}
	for(int i=0;i<k;i++){
		a[n-k+i]=b[i];
	}
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	
}