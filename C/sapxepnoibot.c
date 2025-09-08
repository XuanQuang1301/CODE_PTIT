#include <stdio.h>
int main (){
	int n;scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int s=0;
	int temp;
	int r;
    for (int i = 0; i < n-1; i++){	
    	r=0;
	for (int j = 0; j < n-1; j++){
		if (a[j] > a[j+1]){
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;	
                    r=1;
		}	
		}
		if(r==0) break;
		s++;
    	printf("Buoc %d: ", s);
		for(int i=0;i<n;i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}