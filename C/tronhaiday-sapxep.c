#include<stdio.h>
int main (){
	int t;scanf("%d", &t);
	int i=1;
	while(i<=t){
		int n;
		scanf("%d", &n);
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d", &b[i]);
	}
	printf("Test %d:\n", i);
	int s=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				s=a[i];
				a[i]=a[j];
				a[j]=s;
			}
		}
	}
	int r=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(b[j]>b[i]){
				s=b[i];
				b[i]=b[j];
				b[j]=s;
			}
		}
	}
	int c[n];
	for(int i=0;i<n*2;i++){
		if(i%2==0){
			c[i]=a[i/2];
		}
		else c[i]=b[(i-1)/2];
	}	
	for(int i=0;i<n*2;i++){
		printf("%d ", c[i]);
	}
	printf("\n");
	i++;
	}
}