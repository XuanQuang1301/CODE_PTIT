#include<stdio.h>
long long thuanNghich(long long n){
	long long r=0;
	long long i=n;
	while(n!=0){
		 r = r*10 + n%10;
		 n/=10;
		}
		if(r==i) return 1;
		else return 0;
	}
	long long chuSo(long long n){
		long long b=0;
	while (n!=0){
		long long a=n%10;
		 if(a%2==0){ return 0;}
		   b+=a;
		   n/=10;
		}
		if(b%2==0) return 0;
		return 1;
	}	 	 
	int main (){
		int t;scanf("%d", &t);
		while(t--){
			long long n;scanf("%lld", &n);
			if(thuanNghich(n)){
			     if(chuSo(n)){
		     	    printf("YES\n");
				}
				else printf("NO\n");
            }
         else  printf("NO\n");
	   }
    }
