
import java.util.Scanner;

public class J02022{
    public static int []a = new int[11];
    public static  int []vs = new int[11];
    public static int n;
    public static void check(){
        for(int i = 1; i < n; i++){
            if(Math.abs(a[i] - a[i + 1]) == 1){
                return;
            }
        }
        for(int i = 1; i <= n; i++){
            System.out.print(a[i]);
        }
        System.out.println();
    }
    public static void Try(int i){
        for(int j = 1; j <= n; j++){
            if(vs[j] == 0){
                a[i] = j;
                vs[j] = 1;
                if(i == n){
                    check();
                }
                else Try(i + 1);
                vs[j] = 0;
            }
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            n = sc.nextInt();
            for(int i = 1; i <= n; i++){
                a[i] = vs[i] = 0;
            }
            Try(1);
        }
    }
}