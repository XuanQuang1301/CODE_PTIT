#include <stdio.h>
#include <math.h>
int kt(int n){
	int r=0, s=0, i=n;
	while(n>0){
		r=r*10+n%10;
		s+=n%10;
		n/=10;
	}
	if(r==i && s%10==0){
		return 1;
	}
	return 0;
}
int main (){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int r=pow(10,n)-1;
		int s=pow(10,n-1);
		int cnt=0;
		for(int i=s;i<=r;i++){
			if(kt(i)){
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}