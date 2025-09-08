#include <stdio.h>
int tn(int n){
	int r=0, i=n;
	while(n!=0){
		r+=r*1+n%10;
		n/=10;
	}
	if(r==i) return 1;
	return 0;
}
int kt(int n){
	int s=0;
	while(n!=0){
		s=n%10;
		n/=10;
		if(s%2!=0) return 0;
	}
	return 1;
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		if(tn(n)&&kt(n)){
			printf("YES\n");
		}
		else printf("NO\n");
		printf("\n");
	}
}