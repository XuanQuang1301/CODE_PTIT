#include <stdio.h>

int main (){
	int n ;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int b[n-1];
	for(int i = 0; i < n-1; i++){
		scanf("%d", &b[i]);
	}
	int tong = a[0];
	int s;
	for(int i = 1; i < n; i++){
		if(b[i-1]==1){
			tong+=a[i];
		}
		if(b[i-1]==2){
			tong-=a[i];
		}
	}
	printf("%d", tong);
}