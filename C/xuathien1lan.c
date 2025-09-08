#include <stdio.h>
int main (){
	int n;scanf("%d", &n);
	int a[n];
	int cnt[10001]={0};
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	int s=0;
	for(int i=0;i<n;i++){
		if(cnt[a[i]]==1){
			s++;
		}
	}
	printf("%d\n", s);
	for(int i=0;i<n;i++){
		if(cnt[a[i]]==1){
			printf("%d ", a[i]);
		}
	}
}