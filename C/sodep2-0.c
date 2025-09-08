#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int kt(char a[]){
	int dau=0, cuoi= strlen(a)-1;
	if( a[dau]!='8' || a[cuoi]!='8' ) return 0;
	while(dau<cuoi){
		if(a[dau] != a[cuoi]) return 0;
		dau++;
		cuoi--;
	}
	return 1;
}
int chia(char a[]){
	int n=0;
	for(int i=0;i<strlen(a); i++){
		n+=a[i] - '0';
	}
	if(n%10==0) return 1;
	return 0;
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
	  char a[500];
	  scanf("%s",a);
	  if(kt(a) && chia(a) ) printf("YES\n");
	  else printf("NO\n");
	}
}