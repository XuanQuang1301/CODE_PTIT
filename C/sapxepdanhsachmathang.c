#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
 struct hang{
 	int stt;
 	char ten[100];
 	char nhom[100];
 	float gmua, gban;
 	float loinhuan;
 };
 int main (){
 	int n ;
 	scanf("%d", &n);
 	struct hang a[n], tmp;
 	for(int i = 0; i < n; i++){
 		a[i].stt = i+1;
 		getchar();
 		gets(a[i].ten);
 		gets(a[i].nhom);
 		scanf("%f%f", &a[i].gmua, &a[i].gban);
 		a[i].loinhuan = a[i].gban - a[i].gmua;	
	}
	 for(int i = 0; i < n; i++){
	 	for(int j = i+1; j < n; j++){
	 		if(a[i].loinhuan < a[j].loinhuan ){
	 			tmp = a[i];
	 			a[i] = a[j];
	 			a[j] = tmp;
			 }
		 }
	 }
	 for(int i = 0; i < n; i++){
	 	printf("%d %s %s %.2f\n",a[i].stt, a[i].ten, a[i].nhom, a[i].loinhuan);
	 }
 }