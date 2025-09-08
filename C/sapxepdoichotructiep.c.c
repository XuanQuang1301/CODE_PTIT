#include <stdio.h>
int main (){
	int n;scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int s=0;
	for(int i=0;i<n;i++){
	if(i+1==n) break;	
	printf("Buoc %d: ", i+1);		
			for(int j=i;j<n;j++){
				if(a[j]<a[i]){
					s=a[i];
					a[i]=a[j];
					a[j]=s;
				}
			}
			for(int k=0;k<n;k++){
					printf("%d ", a[k]);	
				}
				printf("\n");
	}
	
}