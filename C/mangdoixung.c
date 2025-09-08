#include <stdio.h>
#include <math.h>
int kt(int a[],long long n ){
	int dau=0, cuoi=n-1;
		while(dau<cuoi){
			if(a[dau]!=a[cuoi]){  return 0;}
			dau++;
			cuoi--;
			}
			return 1;
			}
int main (){
	int t;scanf("%d", &t);
	while(t--){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%lld", &a[i]);
		}
		if(kt(a, n)){ printf("YES\n");}
		else printf("NO\n");
		}
		return 0;
}
