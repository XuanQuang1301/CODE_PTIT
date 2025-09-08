#include <stdio.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int s=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
			if(a[i]<=a[j]){
				s++;
			}		
		}
		if(s==0){
		printf("%d ", a[i]);}
		s=0;
	}
	printf("\n");
}
}