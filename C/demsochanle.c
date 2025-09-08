#include <stdio.h>
#include <math.h>
int main (){
	long long  n;
	scanf("%lld", &n);
	int le = 0;
	int chan =0;
	if(n!=0){
	while(n>0){
		int i = n % 10 ;
		if(i%2==0){
		chan += 1;
		}
		else {
			le += 1;
		}
		n/=10;
	}
	printf ("%d %d", le, chan);
	}
	else {
		printf ("0");
	}
	return 0;
}