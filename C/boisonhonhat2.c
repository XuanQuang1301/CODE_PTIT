#include <stdio.h>
int uc(long long a, long long b){
	while(b != 0){
		int r = a%b;
		a=b;
		b=r;
	}
	return a;
}
int main (){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		unsigned long long bc = 1;
		if(a <= b){
		for(int i = a; i <= b; i++){
			bc = bc*i/uc(bc, i);
		}
	}
	else {	
		for(int i = b; i <= a; i++){
			bc = bc*i/uc(bc, i);
		}
	}
		printf("%llu\n", bc);
	}
}