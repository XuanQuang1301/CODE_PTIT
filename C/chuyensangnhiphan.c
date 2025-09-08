#include <stdio.h>
int main (){
	int n;
	scanf("%d", &n);
	int a[100];
	int s=0;
	for(int i=0;;i++){
		a[i]=n%2;
		s++;
		n/=2;
		if(n==0){
			break;
		}
	}
	for(int i=s-1;i>=0;i--){
		printf("%d", a[i]);
	}
	
}