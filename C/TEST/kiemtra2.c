#include <stdio.h>
#include <string.h>
struct hocsinh{
	char masv[100];
	char hoten[100];
	char lop[20];
	float x, y, z;
};
int main(){
	int n;
	scanf("%d", &n);
	struct hocsinh a[200], tmp;
	for(int i = 0; i < n; i++){
		getchar();
		gets(a[i].masv);
		gets(a[i].hoten);
		gets(a[i].lop);
		scanf("%f%f%f", &a[i].x, &a[i].y, &a[i].z);
		
	}
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(strcmp(a[j].hoten, a[i].hoten) < 0){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d %s %s %s %.1f %.1f %.1f\n", i+1, a[i].masv, a[i].hoten, a[i].lop, a[i].x, a[i].y, a[i].z);		
	}
}