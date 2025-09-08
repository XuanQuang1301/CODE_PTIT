#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct sinhvien{
	int stt;
	char hoten[100];
	char ngaysinh[50];
	float mon1, mon2;
	float sum;
};

int main (){
	int n;
	scanf("%d\n", &n);
	struct sinhvien a[n], tmp;
	for(int i=0;i<n;i++) {
		a[i].stt = i+1;
		
	    gets(a[i].hoten);
	    gets(a[i].ngaysinh);
	    
	    if(i==n-1) scanf("%f %f %f", &a[i].mon1,&a[i].mon2);
	    else scanf("%f %f %f\n", &a[i].mon1,&a[i].mon2);
	    
        a[i].sum = a[i].mon2 - a[i].mon1;
    }
    for(int i=0;i<n;i++){
    	for(int j = i + 1; j < n; j++){
    		if(a[j].sum > a[i].sum){
    			tmp = a[i];
    			a[i] = a[j];
    			a[j] = tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d %s %s %.2f\n",a[i].stt, a[i].hoten, a[i].ngaysinh, a[i].sum );
    }
}