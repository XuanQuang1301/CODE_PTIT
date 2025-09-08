#include <stdio.h>
#include <math.h>
int snt(int n){
		for(int i=2;i<sqrt(n);i++){
			if(n%i==0) return 0;
	}
	
	return n>1;
}
int cp(int n){
	int t=sqrt(n);
	if(t*t==n&&snt(n)) {
	return 1;}
	return 0;
}
	int main (){
		int t;scanf("%d", &t);
		while(t--){
			long long n, m;scanf("%lld%lld", &n, &m);
			int s=0;
			for(int i=2;i<=m;i++){
				if(cp(i)){
					s++;
//					printf("%d ", i);
				}
			}
					printf("%d\n", s);s=0;
		}
	}
			
