#include <stdio.h>
#include <string.h>
struct hocsinh{
	
	char hoten[100];
	char ngaysinh[100];
	char que[20];
	float x;
};
int main(){
	int n;
	scanf("%d", &n);
	struct hocsinh a[200], tmp;
	for(int i = 0; i < n; i++){
		getchar();
		gets(a[i].hoten);
		gets(a[i].ngaysinh);
		gets(a[i].que);
		scanf("%f", &a[i].x);
		
	}
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(strcmp(a[j].que, a[i].que) < 0){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
			if(strcmp(a[j].que, a[i].que) == 0){
				if(a[j].x > a[i].x){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%s %s %s %.2f\n", a[i].hoten, a[i].ngaysinh, a[i].que, a[i].x);		
	}
}