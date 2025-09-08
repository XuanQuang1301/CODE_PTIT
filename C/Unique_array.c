#include <stdio.h>
int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int b[100];
	int s = 1;
	b[0] = a[0];
	for(int i = 1; i < n;i++){
		if(a[i] != a[i-1]){
			b[s] = a[i];
			s++;
		}
	}
	for(int i = 0; i < s; i++){
		printf("%d ", b[i]);
	}
}