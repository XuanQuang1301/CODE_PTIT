#include <stdio.h>
int uc(int n, int m ){
	while(m!=0){
		int o = n%m;
		n=m;
		m=o;
	}
	return n;
}
int bc(int n, int m ){
	return n*m/uc(n, m);
}
void rutgon(int n, int m){
	int i = uc(n, m);
	n /= i;
	m /= i;
	printf("%d/%d\n", n, m);
}
int main (){

	int t; 
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		printf("Case #%d:\n", i);
		if(uc(a, b) != 1){
		    int j = uc(a, b);
		    a /= j;
		    b /= j;
	    }
		if(uc(c, d) != 1){
			int j = uc(c, d);
			c /= j;
			d /= j;
		}
		int mau = bc(b, d);
		a = mau * a/b;
		c = mau * c/d;
		printf("%d/%d %d/%d\n", a, mau, c, mau);
		printf("%d/%d\n", a+c, mau);
		rutgon(a, c);
	}
}