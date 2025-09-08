#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
struct dientich{
	float a, b, c;
	float dientich;
};
int main (){
	int n; 
	scanf("%d", &n);
	struct dientich a[100], s;
	for(int i = 0; i < n; i++){
		scanf("%f %f %f", &a[i].a, &a[i].b, &a[i].c);
		float m = (a[i].a + a[i].b + a[i].c)/2;
		a[i].dientich = sqrt(m*(m-a[i].a)*(m-a[i].b)*(m-a[i].c));
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j].dientich > a[i].dientich){
				s = a[i];
				a[i] = a[j];
				a[j] = s;	
			}
		}
	}
	for(int i = 0; i< n; i++){
		printf("%.0f %.0f %.0f\n", a[i].a, a[i].b, a[i].c );
	}
}