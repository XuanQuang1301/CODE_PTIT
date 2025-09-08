#include <stdio.h>
#include <math.h>
int kt(int n){
	if(n==1||n==0) return 1;
	else {
	long long n2 = 0, n1=1;
	for(int i=3;i<=n;i++){
	   long long t = n2+n1;
	   if(t==n) return 1;
		n2=n1;
		n1=t;
	}
		return 0;}}
		int main (){
			int n;scanf("%d", &n);
			if(kt(n)) printf("1");
			else printf("0");}
