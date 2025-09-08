#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
int snt(int n){
	for(int i=2; i<sqrt(n); i++){
		if(n%i==2) return 0;
	}
	return n>1;
}
int main (){
	char a[19];
	scanf("%s", a);
	int cnt[10000]={0};
	for(int i=0;i<strlen(a);i++){
		cnt[a[i]-'0']++;
	}
	int r=0;
	int s=0;
	for(int i=0;i<strlen(a);i++){
		s = a[i]-'0';
		if(snt(s) && (cnt[s]>=1)){
			r=cnt[a[i]];
			printf("%c %d\n", a[i], r);
			cnt[a[i] -'0']=0;
		}
	}
}