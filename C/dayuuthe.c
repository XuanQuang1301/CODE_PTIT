#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while (t--) {
        char A[1001];
        fgets(A, 1001, stdin);
        int chan = 0, le = 0, cnt = 0;
        for (int i = 0; i < strlen(A)-1; i++) {
        	int s=A[i]-'0';
        	if(i==0){
        		if(A[i]=='0' || strlen(A)-1 ==0){
        			cnt=1;
        			printf("INVALID\n");
        			break;
				}
			}
            if(s>=0 && s<=9){
             if ((A[i] - '0') % 2 == 0) {
                chan++;
            } else {
                le++;
            }
			}
			else{
				cnt=1;
			 printf("INVALID\n");break;}
        }
        if (cnt !=1) {
         if (((strlen(A) - 1) % 2 == 0 && chan > le) || ((strlen(A) - 1) % 2 != 0 && le > chan)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    }
    return 0;
}
