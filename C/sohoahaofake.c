#include <stdio.h>
#include <math.h>
int kt(int n){
	int cuoi = n%10;
	int dau = n;
	while(dau >= 10){
		dau /=10;
	}
	if(dau == cuoi ) return 1;
	else return 0;;
}
int kt2(int n){
	while(n>=10){
		int a = n%10;
		int b = (n/10) %10;
		if(abs(b - a) != 2) {
		    return 0;
		}
		n/=10;
	}
	return 1;
}
int main (){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = a; i <= b; i++){
		if(kt(i)&&kt2(i)){
			printf("%d ", i);
		}
	}
}