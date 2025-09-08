#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void ss(char a[][10], int n){
	
	for(int i = 0; i < n; i++){		
		for(int j = i + 1; j < n; j++){
			if(strcmp(a[j], a[i]) < 0){
				char tmp[100];
				strcpy(tmp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], tmp);
			}
		}
	}
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while (t--) {
        int n;
        scanf("%d\n", &n);
        char a[10][10];
        for (int i = 0; i < n; i++) {
            scanf("%s", a[i]);
        }
        ss(a, n);
        for (int i = 0; i < n; i++) {
            printf("%s", a[i]);
        }
        printf("\n");
    }
}
