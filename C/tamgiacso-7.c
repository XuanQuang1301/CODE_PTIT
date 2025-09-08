#include <stdio.h>
int main (){
	int n;scanf("%d", &n);
	for(int i=1;i<=n;i++){
		int s=n-1;
		int cnt=i;
		for(int j=1;j<=i;j++){
			if(j==1){
			printf("%d ", i);
		    }
     		else if(i>1){
			cnt+=s;
			printf("%d ",cnt);
			s--;}
		}
		printf("\n");
	}
}