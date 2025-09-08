#include <stdio.h>
int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int chan = 0;
	int le = 0;
    for(int i = 0; i < n; i++){
    	if(a[i]%2==0){
    		chan++;
		}
		else le++;
	}
	int tong;
	tong = le*(le-1)/2 + chan*(chan-1)/2;;
	printf("%d", tong);
}