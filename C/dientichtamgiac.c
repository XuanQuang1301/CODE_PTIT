#include <stdio.h>
#include <math.h>
 
int main (){
    int t;
    scanf("%d", &t);
    while(t--){
        double a1, a2, b1, b2, c1, c2;
        scanf("%lf %lf %lf %lf %lf %lf", &a1, &a2, &b1, &b2, &c1, &c2);
        double ab = sqrt(pow(b1 - a1, 2) + pow(b2 - a2, 2));
        double bc = sqrt(pow(c1 - b1, 2) + pow(c2 - b2, 2)); 
        double ca = sqrt(pow(a1 - c1, 2) + pow(a2 - c2, 2));
        if(ab + bc <= ca ||bc + ca <= ab || ca + ab <= bc){
            printf("INVALID\n");
        }
        else{
        	double ncv = (ab + bc + ca)/2;
            double dientich = sqrt(ncv * (ncv - ab) * (ncv - bc) * (ncv - ca));
            printf("%.2lf\n", dientich);
        }
    }
}