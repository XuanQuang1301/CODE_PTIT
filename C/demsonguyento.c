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
	int n;scanf("%d", &n);
	int t=0;
	int a[10]={};
	while(n>0){
		a[t]=n%10;o
		t++;
		n/=10;
	}
	for(int i=t;i>=0;i--){
		int s=0;
		if(snt(a[i])) s++;{
		 for(int j=i-1;j>=0;j--){
			if(a[i]==a[j]){
			 s++;
			printf("%d %d\n", a[j], s);
		}
	     }
       }
   }
}
