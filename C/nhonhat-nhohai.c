#include <stdio.h>
#include <math.h>
int main (){
	int n;scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int min1=a[0], min2 =a[1], t=min1;
	for(int i=0;i<n;i++){
		if(a[i]<min1){
		min1=a[i];
		}
    }
    for(int i=0;i<n;i++){
		if( (a[i]<min2) && (a[i]!=min1) ){
		min2=a[i];
		}
    }
    printf("%d %d", min1, min2);
}