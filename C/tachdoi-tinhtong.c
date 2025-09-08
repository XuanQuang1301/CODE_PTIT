#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
	char A[201];
	gets(A);
    int s=0;
    int n= strlen(A);
	while(n!=0){
          n = strlen(A);
		int dau = 0, cuoi = 0;
		int t=n/2;
		if(s==0){
		    if(n%2==0){
		        for(int i=0;i<t;i++){
		          dau = dau * 10 + (A[i]-'0');	
		        }
		        for(int i=t;i<n;i++){
			      cuoi = cuoi * 10 + (A[i]-'0');
		        }
	        }
	        else{
	    	    for(int i=0;i<t;i++){
		          dau = dau * 10 + (A[i]-'0');	
		        }
		        for(int i=t;i<n;i++){
			      cuoi = cuoi * 10 + (A[i]-'0');
		        }
	  	  } 
	    }
	    if(s!=0){
	    	if(n%2==0){
		        for(int i=0;i<t;i++){
		          dau = dau * 10 + A[i];	
		        }
		        for(int i=t;i<n;i++){
			      cuoi = cuoi * 10 + A[i];
		        }
	        }
	        else{
	    	    for(int i=0;i<t;i++){
		          dau = dau * 10 + A[i];	
		        }
		        for(int i=t;i<n;i++){
			      cuoi = cuoi * 10 + A[i];
		        }
	  	  }
		}
		int tong = dau + cuoi;
		    printf("%d\n", tong);
		n/=2;
		for(int i = n-1; i >= 0; i--){
			A[i]=tong%10;
			tong /= 10;
		}
        s++;
	}
}