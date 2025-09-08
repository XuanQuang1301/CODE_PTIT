#include <stdio.h>
void chan(int n){
	if(n%2==0) printf("%d", n);
}
void le(int n){
	if(n%2!=0) printf("%d", n);
}
int main (){
	int n;scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i*2;j++){
			if(i%2==0){
              chan(j);
			}
			else if(i%2!=0) {
				le(j);   
		}
	}
		printf("\n");
	}
}