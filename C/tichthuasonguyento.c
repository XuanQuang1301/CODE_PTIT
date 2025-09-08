#include <stdio.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int s=1;
		for(int i=2;i<=n;i++){
			if(n%i==0){
				while(n%i==0){
					n/=i;
				}
			s*=i;	
			}
		}
		printf("%d\n", s);
	}
}