
import java.util.Scanner;

public class J01008 {
    public static void main(String [] args){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for(int i = 1; i <= t; i++){
            int n = scanner.nextInt();
            System.out.print("Test " + i + ": ");
            int m = n;
            for(int j = 2; j * j <= m; j++){
                if(m % j == 0){
                    int tmp = 0;
                    while(m % j == 0){
                        tmp++;
                        m /= j;
                    }
                    System.out.print(j + "(" + tmp + ") ");
                }
            }
            if(m > 1){
            System.out.print(m + "(" + 1 + ")");
            }
            System.out.println();
        }
        scanner.close();
    }
}
