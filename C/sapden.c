#include <stdio.h>
int main (){
	int n, l;
	scanf("%d%d", &n, &l);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 1; i < n; i++){
		int j = i - 1, tmp = a[i];
		while(j >= 0 && tmp < a[j]){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = tmp;
	}
	int max = -1;
	for(int i = 0; i < n ; i++){
		if(a[i+1] - a[i] > max){
			max = a[i+1] - a[i];
		}
	}
	printf("%.10f", (float)max/2);
}