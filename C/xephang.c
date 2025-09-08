#include <stdio.h>

int main (){
    int t;
    scanf("%d", &t);
    int i = 0;
    int tong = 0;
    while(t--){
        int n, m;
        scanf("%d", &n, &m);
        
        if(n > i){
            if(n < tong){
                tong += m;
            }
            else {
                tong = n + m;
            }
        } else if(n <= i){
            if(tong < (n + m)){
                tong += m;
                tong -= (i - n);
            }
        }
        
        i = n;
    }
    printf("%d", tong);
    return 0;
}
