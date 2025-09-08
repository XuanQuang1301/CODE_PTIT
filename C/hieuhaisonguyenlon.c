#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 int dao(int a[], int n){
    int l = 0, r = n-1;
    while(l<r){
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        l++;
        r--;
    }
 }
 void hieu(char a[], char b[]){
    int n1 = strlen(a), n2 = strlen(b), n = 0;
    int x[n1], y[n1], z[n1+1];
    for(int i = 0; i<n1; i++) x[i] = a[i] -'0';
    for(int i = 0; i<n2; i++) y[i] = b[i] -'0';
    dao(x, n1);
    dao(y, n2);
    for(int i=n2;i<n1;i++){
        y[i] = 0;
    }
    int nho = 0; 
    int cnt;
    for(int i = 0; i<n1;i++){
        int tmp = y[i] + nho;
        if(x[i] >= tmp ){
            z[n++] = x[i] - tmp;
            nho = 0;
        }
        else if(x[i] < tmp){
            z[n++] = x[i] + 10 - tmp;
            nho = (x[i] + 10)/10;
        }
    }
    int s=0;
    for(int i=n-1;i>=0;i--){
        if(z[i] == 0 && s==0){
            continue;
        }
        printf("%d", z[i]);
        s=1;
    }
 }
 int main (){
    int t ;
    scanf("%d", &t);
    while(t--){
        char a[1001], b[1001];
        scanf("%s%s", &a, &b);
        if(strlen(a) > strlen(b)){
            hieu(a, b);
        }
        else if(strlen(a) < strlen(b)){
            hieu(b, a);
        }
        else{
            int j=0;
            for(int i=0;i<strlen(a);i++){
                if (a[i]-'0' < b[i]-'0'){
                    hieu(b, a);
                    break; 
                }
                else if(a[i]-'0' > b[i]-'0') {
                    hieu(a, b);
                    break;
                }
                else {
                    j=1;
                }
            }
            if(j==1){
                printf("0");
            }
        }
        printf("\n");
    }
 }