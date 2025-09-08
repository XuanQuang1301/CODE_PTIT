#include <stdio.h>
int main(){
	int n;scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	float s=0, t=0;
	for(int i=0; i<n;i++){
		t++;
		s+=a[i];
	}
	printf("%.3f", s/t);
}