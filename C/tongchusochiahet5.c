#include <stdio.h>
#include <math.h>
int snt(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int kt(int n){
	int s=0;
	while(n!=0){
		s+=n%10;
		n/=10;
	}
	if(s%5==0) return 1;
	return 0;
}
int main (){
	int n;scanf("%d", &n);
	int cnt=0;
	for(int i=5;i<=n;i++){
		if(kt(i)&&snt(i)){
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n");
	printf("%d", cnt);
}