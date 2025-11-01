import java.io.*;
import java.util.*;

public class J07076_SapXepMaTran {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MATRIX.in"));
        int t = sc.nextInt(); // số bộ test
        while (t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int k = sc.nextInt(); // cột cần sắp xếp (1-based)
            
            int[][] a = new int[n][m];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    a[i][j] = sc.nextInt();
                }
            }

            // Trích cột cần sắp xếp
            int[] col = new int[n];
            for (int i = 0; i < n; i++) col[i] = a[i][k - 1];

            // Sắp xếp tăng dần
            Arrays.sort(col);

            // Gán lại vào cột k
            for (int i = 0; i < n; i++) a[i][k - 1] = col[i];

            // In kết quả
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    System.out.print(a[i][j]);
                    if (j < m - 1) System.out.print(" ");
                }
                System.out.println();
            }
        }
    }
}

