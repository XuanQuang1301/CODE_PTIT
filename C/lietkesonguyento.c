#include <stdio.h>
#include<math.h>
int snt(int n){
	
	for(int i=2;i<=n;i++){
		if(n%i!=0) continue;
		int st=0;
		while(n%i==0){
			st++;
			n/=i;
		}
		printf("%d(%d) ",i,st);
	}
}
int main (){
	int t;scanf("%d", &t);
	int j=1;
	while(j<=t){
		int n;scanf("%d",&n);
		printf("Test %d: ", j);snt(n);
		printf("\n");
      j++;
    }
}
