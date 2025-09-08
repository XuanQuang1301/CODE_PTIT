#include <stdio.h>
#include <stdlib.h>
int main (){
int a[10]={1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *b=a;
for(int i=0;i<10;i++){
	printf("%d\n", b+i);
}
}