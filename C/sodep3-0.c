#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
int snt(int n){
	for(int i=2;i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int kt (char a[]){
	int dau = 0, cuoi = strlen(a)-1;
	while(dau<cuoi){
		if( a[dau]!=a[cuoi] || !snt(a[dau]-'0') || !snt(a[cuoi]-'0') ) return 0;
		dau++;
		cuoi--;
	}
	return 1;
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
	char a[501];
	scanf("%s", a);
	if(kt(a)) printf("YES\n");
	else printf("NO\n");
}
}