#include <stdio.h>
#include <string.h>
struct so{
    char b[10];
    float a;
};
int main (){

    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        int m;
        scanf("%d", &m);
        struct so A[m], tmp;
        for(int i = 0; i < m; i++){
            gets(A[i].b);
        }
        for(int i = 0; i < m; i++){
            scanf("%f", A[i].a);
        }
        for(int i = 0; i < m; i++){
            for(int j = i + 1; i < m; j++){
                if(A[j].a < A[i].a){
                    tmp = A[i];
                    A[i] = A[j];
                    A[j] = tmp;
                }
            }
        }
        
    }
}