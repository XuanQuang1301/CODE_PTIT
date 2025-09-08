#include <stdio.h>
#include <math.h>
int thuanNghich(int n){
	int i=n;
	 long long r=0;
	 while(n!=0){
	 	r=r*10+n%10;
	 	n/=10;
	 }
	 if(i==r) return 1;
	 else return 0;
}
int snt(int n){
	if(n<=1) return 0;
	else 
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int a, b;
		int s=0;
		scanf("%d%d", &a,&b);
		for(int i=a;i<=b;i++){
			if(i%2!=0&&thuanNghich(i)&&snt(i)){
			    if(s==10){
				 printf("\n"); s=0;}
			        printf("%d ",i);
			            s++;
		    }
	    }
	    printf("\n");
	}
	return 0;
}
