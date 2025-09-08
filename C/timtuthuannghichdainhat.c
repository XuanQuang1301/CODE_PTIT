#include <stdio.h>
#include <string.h>
#include <math.h>
int kt(char a[]){
	int l = 0, r = strlen(a) - 1;
	while(l <= r){
		if(a[l] != a[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int max(int n, int m){
	if(n > m) return n;
	return m;
}
char b[10001];
int n = 0;
int cnt[10001]={0};
char a[10001][10001]; 
int Max = 0;
int main (){
	
	while(scanf("%s ", b) != -1){
		 
        if(kt(b) == 1){
        	Max = max(Max, strlen(b));
        	int t = -1;
        	for(int i = 0; i < n; i++){
        		if(strcmp(a[i], b) == 0){
        			t = i;
        			break;
				}
			}
			if(t != -1){
				cnt[t] ++;
			}
			else{
				strcpy(a[n], b);
				cnt[n] = 1;
				n++;
			}
		}
	}

	for(int i = 0; i < n; i++){
		if(strlen(a[i]) == Max){
			printf("%s %d\n", a[i], cnt[i]);
		}
	}
	
}