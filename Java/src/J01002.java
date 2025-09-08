import java.util.Scanner;

public class J01002 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt(); // số bộ test, không quá 10
        while (t > 0) {
            long n = scanner.nextLong(); // đọc N, kiểu long
            long sum = n * (n + 1) / 2; // công thức tính tổng
            System.out.println(sum);
            t--;
        }

        scanner.close();
    }
}
