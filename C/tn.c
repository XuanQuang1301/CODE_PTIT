#include <stdio.h>
#include <string.h>
int snt(int n){
	for(int i = 2; i*i<=n; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int kt1(char a[]){
	int l = 0, r = strlen(a) - 1;
	while(l<=r){
		if(a[l] != a[r]) return 0;	
		l++;
		r--;
	}
	return 1;
}
int kt2(char a[]){
	for(int i = 0; i <strlen(a); i++){
		if(snt(a[i] - '0') == 0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[1000];
		gets(a);
		if(kt1(a) && kt2(a)) printf("YES\n");
		else printf("NO\n");
	}
}