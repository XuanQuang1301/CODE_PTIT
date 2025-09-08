import java.util.Scanner;

public class J01007 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        
        long[] a = new long[93]; 
        a[0] = 0; 
        a[1] = 1;
        for (int i = 2; i <= 92; i++) {
            a[i] = a[i - 1] + a[i - 2];
        }

        while (t-- > 0) {
            long n = scanner.nextLong();
            boolean ok = false;
            for (int i = 0; i <= 92; i++) {
                if (a[i] == n) {
                    ok = true;
                    break;
                }
            }
            if (ok) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
