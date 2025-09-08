
#include <stdio.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int a[n];
		for(int i=0; i<n;i++){
			scanf("%d", &a[i]);
		}
		int s=0;
		for(int i=0;i<n;i++){
			if(a[i]==a[i+1]) s++;
		}
		printf("%d\n", s);
		s=0;
	}
}