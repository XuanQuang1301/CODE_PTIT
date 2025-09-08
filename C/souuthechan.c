#include <stdio.h>
#include <math.h>
int main (){
	int t; scanf("%d", &t);
	while(t--){
		long long n;scanf("%lld", &n);
		int t=0,chan=0,le=0;
		 if(n%2!=0){
			while(n!=0){
				int t=n%10;
				if(t%2==0){
					chan++;}
				else le++;
				n/=10;}
				if(chan<le) printf("YES\n");
				else printf("NO\n");
				}
		else printf("NO\n");
				}
			}
