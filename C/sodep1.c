#include <stdio.h>
#include <math.h>
long long kt(long long n){
	if(n<10) return 0;
	long long cuoi=n%10;
	long long dau=n;
	while(dau>=10){
		dau/=10;
	}
	if((cuoi/dau==2)||(dau/cuoi==2)) return 1;
	return 0;
}
long long thuannghich( long long n){
	long long s=0, t=0;
	long long i=n/10;
	while(i>=10){
		s=s*10+i%10;
		t++;
		i/=10;
	}
	long long a=pow(10,t);
	long long b=n/10%a;
	if(b==s){
  return 1;}
 return 0;
}
int main (){
	int t;scanf("%lld", &t);
	while(t--){
		long long n;scanf("%lld", &n);
//		printf("%lld",thuannghich(n) );
		if(thuannghich(n)&&kt(n))
		printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}