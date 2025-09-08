#include <stdio.h>
#include <math.h>
int snt(int n){
	if(n==0||n==1) return 0;
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
		}
	}
	return 1;}
	int main (){
		int t; scanf("%d", &t);
		while(t--&&t<=100){
			int n;scanf("%d", &n);
			int a=0, b=0;
			for(int i=1;i<=n/2;i++){
				if(snt(i)&&snt(n-i)){
					a=i;
					b=n-i;
				
				printf("%d %d ", a, b);
				}
			}
			printf("\n");
		}
	}