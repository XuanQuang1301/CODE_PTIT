#include <stdio.h>
int snt(int n ){
	for(int i = 0; i*i<=n; i++){
		if( n%i == 0) {
			return 0;
		}
	}
	return n>1;
}
int chu(int n){
	if(n == 2 || n == 3 || n == 5 || n == 7 || n==9){
		return 1;
	}
	return 0;
}
int kt(int n){
	int sum = 0;
	while(n>0){
		int i = n%10;
		if(chu(i) != 1){
			return 0;
		}
		sum += i;
		n/=10;
	}
	if(snt(sum)){
		return 1;
	}
	else return 0;
}
int main (){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int cnt = 0;
		for(int i=a;i<=b;i++){
			if(snt(i)){
				if(kt(i)){
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}
}