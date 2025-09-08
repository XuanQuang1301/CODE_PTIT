#include <stdio.h>
int kt(int n){
	int i=n, r=0, s=0, cnt=0;
	while(n>0){
		r=r*10+n%10;
		if(n%10==6){
			cnt++;
		}
		s+=n%10;
		n/=10;
	}
	if(r==i && s%10==8 && cnt!=0){
		return 1;
	}
	return 0;
}
int main (){
	int n, m;
	scanf("%d%d", &n, &m);
	int cnt=0;
	int min =n;
	if(m<min){
		min=m;
		m=n;
	}
	for(int i=min;i<=m;i++){
		if(kt(i)){
			printf("%d ", i);
		}
	}
//	printf("%d", cnt);
}