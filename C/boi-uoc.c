#include<stdio.h>
#include<math.h>
int uoc(int a, int b){
	int s=0;
	while(b!=0){
		s=a%b;
		a=b;
		b=s;
	}
	return a;
}
int boi(int a, int b){
	return (a*b)/uoc(a,b);
}
int main (){

		int a, b;
		scanf("%d%d", &a, &b);
	printf("%d\n%d",uoc(a,b),boi(a,b));
}