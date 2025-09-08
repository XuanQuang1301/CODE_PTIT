#include <stdio.h>
int cnt[1000001]={0};
int main (){
	int n;scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int cnt[100001]={0};
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(cnt[a[i]]!=0&&cnt[a[i]]>1){
			printf("%d ", a[i]);
			cnt[a[i]]=0;
		}
	}
}
