#include <stdio.h>
#include <math.h>
int uoc(int n){
	int tonguoc=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			tonguoc+=i;
			tonguoc+=(n/i);
			}}
	if(tonguoc==n) return 1;
	else return 0;}
	int main (){
		int n;scanf("%d", &n);
		for(int i=6;i<=n;i++){
			if(uoc(i)) printf("%d ", i);}
			}
		
