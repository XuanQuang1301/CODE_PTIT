#include <stdio.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		printf("%d = ", n);
		int r=0, sum=0;
	  for(int i=2;i<=n;i++){
		if(n%i==0){
		  while(n%i==0){
			r++;
			n/=i;
		  }
		  sum++;
		  if(n==1){
		   sum=0;}
	    }
	    if(i!=0&&r!=0){
	   printf("%d^%d ", i, r); r=0;}
	  if(sum>=1){
	  	printf("* ");sum=0;
	  }
	}
	printf("\n");
	}
}