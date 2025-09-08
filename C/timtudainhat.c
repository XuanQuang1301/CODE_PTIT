#include <stdio.h>
#include <string.h>
int max(int n, int m){
	if(n>m) return n;
	return m;
}
char a[1000][100];
int cnt[1000]={0};
int n = 0;
int main (){
	char b[1000];
	int Max =-1e9;
	while(scanf("%s", b) != -1){
		Max = max(strlen(b), Max);
		int t = -1;
		for(int i = 0; i < n; i++){
			if(strcmp(a[i], b) == 0){
				t = i;
				break;
			}
		}
		if(t != -1){
			cnt[t]++;
		}
		else{
			strcpy(a[n], b);
			cnt[n] = 1;
			n++;
		}
	}
	for(int i = 0; i < n; i++){
		if(strlen(a[i]) == Max){
			printf("%s %d %d\n", a[i], Max, cnt[i]);
		}
	}
}