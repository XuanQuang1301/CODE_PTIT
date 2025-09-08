#include <stdio.h>
//cap phat dong
int main (){
	int *ptr = (int*)malloc(100000000 * sizeof(int));
	int n=5;
	for(int i=0;i<n;i++){
		scanf("%d", &ptr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d", ptr[i]);
	}
}