#include<stdio.h>
#include<math.h>
int soNguyento(int n){
	if(n<=1) return 0;
	else
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}
int Dau(int n){
	int dau =n;
	while(dau>10){
		dau/=10;
	}
	return dau;
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		for(int i=a;i<=b;i++){
			int cuoi = i%10;
			if((soNguyento(i))&&(Dau(i)==cuoi))
			printf(" %d ", i);
		}
	}
}