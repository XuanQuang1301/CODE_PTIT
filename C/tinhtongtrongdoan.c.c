#include <stdio.h>
#include <math.h>
int main (){
	long long a, b;
	scanf("%lld %lld", &a, &b);

	long long i=a;
	long long sum=0;
	if(a<b){
	    while(i<=b){
		   sum += i;
		i++;	
	  }
	    printf("%lld", sum);
	}
	else if(a>b){
		while(i>=b){
			sum += i;
			i--;
		}
		printf("%lld", sum);
	}
	else{
		printf("%lld",a);
	}
return 0;	
}