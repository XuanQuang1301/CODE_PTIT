#include <stdio.h>
#include <string.h>
int main(){
	char a[1000];
	gets(a);
	int b[1000];
	int n = 0;
	int cnt[1000]={0};
	int test;
	if(strlen(a) % 2 == 0){
	   test = strlen(a);
	}
	else test = strlen(a) - 1;
	for(int i = 0; i < test;){
		int t = 2;
		b[n] = 0;
		while(t--){
			b[n] = b[n] * 10 + (a[i] -'0');
			i++;
		}
		n++;
	}
	for(int i = 0; i < n; i++){
	    cnt[b[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(cnt[b[i]] > 0){
			printf("%d %d\n", b[i], cnt[b[i]]);
			cnt[b[i]] = 0;
		}
	}
}