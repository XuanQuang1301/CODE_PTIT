#include <stdio.h>
#include <math.h>
int main (){
	int n;scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int cnt[10001]={0};
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	int s=0;
	for(int i=0;i<n;i++){
		s=cnt[a[i]];
		if(cnt[a[i]]!=0){
		printf("%d %d\n", a[i], s);
		cnt[a[i]]=0;
	}
}}