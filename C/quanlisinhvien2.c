#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct sinhvien{
    int ma;
    char hoten[100];
    char gioitinh[4];
    float diem;
};

int main (){
    int n;
    scanf("%d", &n);
    
    struct sinhvien a[n], tmp;
    for(int i = 0; i < n; i++){
        a[i].ma = i + 1;
        getchar();
        gets(a[i].hoten);

        gets(a[i].gioitinh);
        scanf("%f", &a[i].diem);
    }
    for(int i = 0; i < n; i++){
    	for(int j = i + 1; j < n; j++){
    		if(a[i].diem < a[j].diem){
    			tmp = a[i];
    			a[i] = a[j];
    			a[j] = tmp;
			}
		}
	}
    for(int i = 0; i < n; i++){
        printf("%d %s %s %.2f\n", a[i].ma, a[i].hoten, a[i].gioitinh, a[i].diem); // use %d for integer
    }
    
    return 0;
}
