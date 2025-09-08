#include <stdio.h>
#include <math.h>
  long long so4(long long n){
  	int i=0;
  	while(n!=0){
  		i=n%10;
  		if(i==4) return 0;
  		n/=10;}
  		return 1;
		  }
   long long tn(long long n){
   	long long i=n;
   	long long s=0;
   	while(n!=0){
   		s=s*10+n%10;
   		n/=10;}
   		if(i==s) return 1;
   		else return 0;
   		}
   long long chia(long long n){
   		long long t=0;
  		while(n!=0){
        	t+=n%10;
   			n/=10;
   		}
   		if(t%10==0) return 1;
   		else return 0;
   	}
   		int main (){
   			int t;scanf("%d", &t);
   			while(t--){
   				 long long n;scanf("%lld", &n);
   				 long long d=pow(10,(n-1));
   				 long long c=pow(10,n)-1;
   				for(int i=d;i<=c;i++){
   					if(chia(i)&&tn(i)&&so4(i))
   					printf("%lld ", i);}
   					printf("\n");
   					}
   		}
