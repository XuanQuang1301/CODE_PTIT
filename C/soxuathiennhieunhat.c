#include <stdio.h>
#include <string.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int A[n];
		for(int i=0;i<n;i++){
			scanf("%d", &A[i]);
		}
		int cnt[1000]={0};
		for(int i=0;i<n;i++){
			cnt[A[i]]++;
		}
		int B[1000], max=0, s;
		for(int i=0;i<n;i++){
			if(cnt[A[i]]>=max){
				max=cnt[A[i]];
			    s=A[i];
			}
			else continue;
				printf("%d ", s);
				cnt[A[i]]=0;
		}
		printf("\n");
	}
}