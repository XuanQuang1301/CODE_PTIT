#include <stdio.h>
#include <math.h>
struct tamgiac{
	float a1, a2;
	float b1, b2;
	float c1, c2;
	float ab;
	float bc;
	float ca;
	float chuvi;
};
void nhap(struct tamgiac n){
	int s = 0;
	scanf("%f%f%f%f%f%f", &n.a1, &n.a2, &n.b1, &n.b2, &n.c1, &n.c2);
	n.ab = sqrt(pow(n.b1 - n.a1, 2) + pow(n.b2 - n.a2, 2));
	n.bc = sqrt(pow(n.c1 - n.b1, 2) + pow(n.c2 - n.b2, 2));
	n.ca = sqrt(pow(n.a1 - n.c1, 2) + pow(n.a2 - n.c2, 2));
	if(n.ab + n.bc <= n.ca || n.bc + n.ca <= n.ab || n.ca + n.ab <= n.bc){
		printf("INVALID\n");
	    s = 1;
	}
	if(s != 1 ){
		float dientich = 1*sqrt((n.ab+n.bc+n.ca)*(n.ab+n.bc-n.ca)*(n.bc+n.ca-n.ab)*(n.ca+n.ab-n.bc))/4;
	    printf("%.2f\n", dientich);
	}
}
int main (){
	struct tamgiac tg;
	int t;
	scanf("%d", &t);
	while(t--){
		nhap(tg);
	}
	
}