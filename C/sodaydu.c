#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main (){
	int t;scanf("%d", &t);
	getchar();
	while(t--){
		char A[1001];
		gets(A);
		int cnt[1001]={0};
		int n=0;
		for(int i=0;i<strlen(A);i++){
			if(A[0]=='0' || A[i]-'0'<0 || A[i]-'0'>9){
				printf("INVALID\n");
				n=1;
				break;
			}
			cnt[A[i]]++;
		}
		int s=0;
		for(int i=0;i<strlen(A);i++){
			if(cnt[A[i]]>=1){
				if(A[i]-'0'>= 0 && A[i]-'0' <= 9){
				s++;	
				}
			}
			cnt[A[i]]=0;
		}
		if(n==0){
			if(s==10){
				printf("YES\n");
			}
			else printf("NO\n");
		}
	}
}