#include <stdio.h>
int uoc(int n, int m){
	while(m){
			int r = n%m;
			n = m; 
			m = r;
		}
	return n;
}
int boi(int n, int m){
	return n*m/(uoc(n, m));
}

int main (){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if(uoc(a, b) != 1){
			int k = uoc(a, b);
			a/=k;
			b/=k;
		}
		if(uoc(c, d) != 1){
			int k = uoc(c, d);
			c/=k;
			d/=k;
		}
		int boichung = boi(b, d);
		a *= boichung/b;
		c *= boichung/d;
		printf("Case #%d:\n", i);
		printf("%d/%d %d/%d\n", a, boichung, c, boichung);
		printf("%d/%d\n", a+c, boichung);
		if(uoc(a, c) != 1){
			int k = uoc(a, c);
			a/=k;
			c/=k;
		}
		printf("%d/%d\n", a, c);
	}
}