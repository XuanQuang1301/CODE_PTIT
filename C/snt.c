#include <stdio.h>
int snt(int n){
	int s=0;
	for(int i=2;i<=n;i++){
		while(n%i==0){
			s++;
			n/=i;
		}
		printf("%d^%d*",i,s);
	}
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		snt(n);
	}
}
