#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	long long tong = 0, tich = 1;
	for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	int max = 0, min = 99999;
	int l, m;
	for(int i = 0; i < n; i++){
		if(a[i]>max){
			max = a[i];
			l = i;
		}
		if(a[i] <= min){
			min = a[i];
			m = i;
		}
	}
	printf("%d %d", m, l);
}