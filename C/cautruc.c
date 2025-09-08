#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct SV{
    char ma[50];
    char ten[100];
    float gpa;
};
typedef struct SV SV ;
void nhap(SV *a){
    scanf("%s", a->ma);
    getchar();
    gets(a->ten);
    scanf("%f", &a->gpa);
}
void in(SV a){
    printf("%s %s %.2f\n", a.ma, a.ten, a.gpa);
}
void timkiem(SV a[], int n){
    float res = 0; int s=0;
    for(int i=0; i<n; i++){
        if(a[i].gpa>res){
            res=a[i].gpa;
            s=i;
        }
    }
    in(a[s]);
}
int main (){
    int n; 
    scanf("%d", &n);
    SV a[n];
    for(int i=0;i<n;i++) nhap(&a[i]);
    for(int i=0;i<n;i++) in(a[i]);
    timkiem(a, n);

}