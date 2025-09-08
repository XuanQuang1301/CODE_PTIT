#include <stdio.h>
#include <math.h>
int snt(int n){
	if(n==0||n==1) return 0;
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
		}
	}
	return 1;}

int main (){
	int t; scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int a[100];
		int t=0;
		for(int i=2;i<n;i++){
		if(snt(i)){
			a[t]=i;
			t++;
		}}
		for(int i=0;i<t;i++){
			for(int j=i;j<t;j++){
				if(a[i]+a[j]==n) printf("%d %d ", a[i], a[j]);
			}
		}
	}
}
	
