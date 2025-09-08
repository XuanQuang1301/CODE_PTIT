#include <stdio.h>
#include <math.h>
int snt(int n){
	if(n<=1) return 0;
	else 
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
		return 1;
}
int thuanNghich(int n){
	int i=n;
	int r=0;
	while(n!=0){
		r=r*10+n%10;
		n/=10;
	}
	if(i==r){ return 1;}
	else return 0;
	}
	int main (){
		int t;scanf("%d", &t);
		while(t--){
			int a, b;
			int m=0;
			scanf("%d%d", &a, &b);
			for(int i=a;i<=b;i++){
				if(snt(i)){
					if(thuanNghich(i)){
						m++;
						printf("%d ", i);
						if(m==10) printf("\n");
					}
				}
			}
	       printf("\n");
	}	}				
