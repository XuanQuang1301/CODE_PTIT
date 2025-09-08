#include <stdio.h>
int main (){
	int n;scanf("%d", &n);
	int a[(n-1)*2];
	for(int i=0;i<n-1;i++){
		int c, b;scanf("%d %d", &c, &b);
		a[i*2]=c;
		a[i*2+1]=b;
	}
	int cnt[10001]={0};
	for(int i=0;i<(n-1)*2;i++){
		cnt[a[i]]++;
	}
	int s=0;
	for(int i=0;i<n;i++){
		if(cnt[a[i]]==(n-1)){
		s++;
		}
	}
	if(s>0) {
	printf("Yes\n");}
		else {
		printf("No\n");}
}