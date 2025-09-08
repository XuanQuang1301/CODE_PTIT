#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int cmp(const void*a, const void*b){
	int* x = (int*)a;
	int* y = (int*)b;
	if(*x < *y) return -1;
	else return 1;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	int check = 0;
	for(int i = 0; i < n-1; i++){
		if(a[i+1] - a[i] > 1) {
			printf("%d", a[i]+1);
			check = 1;
			break;
		}
	}
	if(!check && a[n-1] == 1000000) printf("1000001");
	if(!check) printf("%d", a[n - 1] + 1);
	
}