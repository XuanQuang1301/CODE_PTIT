#include <stdio.h>
int tn(int n){
	int r=0, i=n;
	while(n!=0){
		r=r*10+n%10;
		if(n%10==9){
			return 0;
		}
		n/=10;
	}
	if(r==i) return 1;
	else return 0;
}
int main (){
	int n;scanf("%d", &n);
	int cnt=0;
	for(int i=2;i<=n;i++){
		if(tn(i)){
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n");
	printf("%d", cnt);
}