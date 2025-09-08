#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n;
int a[1000005];
int cmp(const void *a, const void *b){
	int* x = (int*)a;
	int* y = (int*)b;
	return (*x) - (*y);
}
int main (){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	int hieu = 1e9;
	for(int i = 1; i < n; i++){
		if(a[i] - a[i-1] < hieu){
			hieu = a[i] - a[i - 1];
		}
	}
	int cnt = 0;
	for(int i = 1; i < n; i++){
		if(a[i] - a[i-1] == hieu){
			cnt++;
		}
	}
	printf("%d\n%d", hieu, cnt);
}