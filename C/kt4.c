#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		float a, b, c, d;
		scanf("%f%f%f%f", &a, &b, &c, &d);
		float x = (float)pow(c - a, 2);
		float y = (float)pow(b - d, 2);
		printf("%.4f\n", sqrt(x+y));
	}
}