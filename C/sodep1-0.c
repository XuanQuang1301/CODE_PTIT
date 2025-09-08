#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int kt (char a[]){
	int dau =0, cuoi= strlen(a)-1;
	while(dau<cuoi){
		if( a[dau]!=a[cuoi] || (a[dau]%2!=0) || (a[cuoi]%2!=0) ) return 0;
		dau++;
		cuoi--;
	}
	return 1;
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
		char a[500];
		scanf("%s", a);
		if(kt(a)) printf("YES\n");
		else printf("NO\n");
	}
}