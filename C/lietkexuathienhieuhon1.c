#include <stdio.h>
int main (){
	int n;scanf("%d", &n);
	int a[n], cnt[101]={0}, b[101]={0};
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
		b[a[i]]++;
	}
	int s=0;
	for(int i=0;i<n;i++){
		if(b[a[i]]>1){
			s++;
			b[a[i]]=0;
		}
	}	
	printf("%d\n", s);
	for(int i=0; i<n;i++){
		if(cnt[a[i]]>1){
			printf("%d ", a[i]);
			cnt[a[i]]=0;
		}
	}
}