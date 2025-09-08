#include<stdio.h>
#include<math.h>
int uoc(int a,int b){
	int n=0;
	while(b!=0){
		n=a%b;
		a=b;
		b=n;
	}
	return a;
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c,&d);
		if(uoc(a,b)==uoc(c,d)) printf("YES\n");
		else printf("NO\n");
	}
}