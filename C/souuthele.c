#include<stdio.h>
#include <math.h>
long long chanle(long long n){
	int c=0, l=0;
	int i=0;
	while(n!=0){
		i=n%10;
		if(i%2==0){
			c++;
		}
		else l++;
		n/=10;
		}
		if(c<l) return 1;
		else return 0;
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
		long long n;scanf("%lld", &n);
		if(n%2!=0){
			if(chanle(n)){
				printf("YES\n");}
				else printf("NO\n");
		}
		else printf("NO\n");
		}}
