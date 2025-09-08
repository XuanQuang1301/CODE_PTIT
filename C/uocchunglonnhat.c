#include<stdio.h>
#include <math.h>
int uocChung(int n, int m){
	if(n<m){
		for(int i=n;i>0;i--){
			if((n%i==0)&&(m%i==0)) return i;
		}
	}
	else if(n>m){
		for(int i=m;i>0;i--){
			if((n%i==0)&&(m%i==0)) return i;break;
		}
	}
	else if (n=m) return n;
}
int boiChung(int n, int m){
	if(n<m){
		for(int i=m;;i++){
			if((i%n==0)&&(i%m==0)) return i;break;
		}
	}
	else if(n>m){
		for(int i=n;;i++){
			if((i%n==0)&&(i%m==0)) return i;
		}
	}
	else if (n=m) return n;
}
int main (){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", uocChung(a,b));
	printf("%d\n", boiChung(a,b));
}
