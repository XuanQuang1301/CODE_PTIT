#include <stdio.h>
#include <string.h>
int cnt[10001]={0};
int kt(char a[]){
	int l = 0, r = strlen(a) - 1;
	while(l <= r){
		if(a[l] != a[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int main (){
	char a[10000];
	gets(a);
	char b[1000][1000];
	int n = 0;
	char *token = strtok(a, " .,");
	while(token != NULL){
		if(kt(token)){
		    strcpy(b[n++], token);    
		}
		token = strtok(NULL, " .,");
	}
	for(int i = 0; i < n; i++){
		if(cnt[i] == 0){
			int dem = 1;
			for(int j = i + 1; j < n; j++){
				if(strcmp(b[i], b[j]) == 0){
					dem++;
				    cnt[j] = 1;
				}
			}
			printf("%s %d\n", b[i], dem);
		}
	}
}