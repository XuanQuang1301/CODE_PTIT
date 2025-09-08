#include<stdio.h>
#include <math.h>
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main (){
	int t;scanf("%d", &t);
	int i=1;
	while(i<=t){
		int n;scanf("%d", &n);
		int a[n];
		int cnt[10001]={0};
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int s=0;
		for(int i=0;i<n;i++){
			cnt[a[i]]++;}
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
			if(a[j]<a[i]){
				s=a[i];
				a[i]=a[j];
				a[j]=s;
			}
		}
	}
		printf("Test %d:\n", i);
		int r=0;
		for(int i=0;i<n;i++){
			if(snt(a[i])  &&  cnt[a[i]]!=0){
				r=cnt[a[i]];

			printf("%d xuat hien %d lan\n", a[i], r);
			cnt[a[i]]=0;
		}}
		i++;
	}
}