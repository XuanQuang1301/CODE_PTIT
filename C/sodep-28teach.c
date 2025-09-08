#include <stdio.h>
 int pt(int n){
 	int cnt = 0;
 	for(int i = 2; i*i <= n; i++){
 		if(n%i == 0){
 			cnt++;
 		    while(n%i==0){
 			    n/=i;
		    }
	    }
    }    
    if(n>1) cnt++;
	 if(cnt >= 3) return 1;
	 else return 0;
 }
int kt(int n){
	int sum = 0;
	while(n>0){
		sum += n%10;
		n/=10;
	}
	if(sum%10 == 8) return 1;
	else return 0;
}
int main (){
	int a, b;
	scanf("%d%d", &a, &b);
	int max = a, min = b;
	if(a<b){
		max = b; 
		min = a;
	}
	int cnt = 0;
	for(int i = a; i<=b; i++){
		if(kt(i) && pt(i)){
				cnt = 1;
				printf("%d ", i);
			}
	}
	if(cnt == 0){
		printf("28teach\n");
	}
}