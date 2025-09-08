#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct hocsinh{
	char ten[100];
	char ngay[100];
	char diachi[50];
	float diem;
};
int kt(char a[]){
	if(a[strlen(a) - 6] - '0' == 4) return 1;
	return 0;
}
int main (){
    int n;
    scanf("%d", &n);
    struct hocsinh a[n];
     
for(int i = 0; i < n; i++){
	getchar();
	gets(a[i].ten);
	gets(a[i].ngay);
	gets(a[i].diachi);
	
	scanf("%f", &a[i].diem);
}
int j;
for(int i = 0; i < n; i++){
	if(kt(a[i].ngay)){
		printf("%s %s %s %.2f\n", a[i].ten, a[i].ngay, a[i].diachi, a[i].diem);
	}
}	 
}