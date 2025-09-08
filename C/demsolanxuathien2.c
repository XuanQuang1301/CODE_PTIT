#include <stdio.h>
#include <math.h>
int main (){
	int t;scanf("%d", &t);
	int k=1;
	while(k<=t){
	int n;scanf("%d", &n);
	int a[n];
	int cnt[100001]={0}, res=0;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	printf("Test %d:\n", k);
	for(int i=0;i<n;i++){
		res=cnt[a[i]];
		if(cnt[a[i]]!=0){
		printf("%d xuat hien %d lan\n", a[i],res );
		cnt[a[i]]=0;
	}}
	k++;
   }
}