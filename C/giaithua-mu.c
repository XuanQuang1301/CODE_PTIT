#include <stdio.h>
int gt(int n){
	int s=0;
	for(int i=n;i>0;i--){
		int t=i;
		while(t%2==0){
			s++;
			t/=2;
		}
	}

return s;
}
int main (){
	int n, k;
	scanf("%d %d", &n, &k);

	if(gt(n)>=k){
		printf("Yes");
	}
	else printf("No");
}