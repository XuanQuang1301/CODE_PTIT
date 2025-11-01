import java.util.*;
import java.io.*;

public class J04009_DienTichTamGiac {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            Point a = new Point(sc.nextDouble(), sc.nextDouble());
            Point b = new Point(sc.nextDouble(), sc.nextDouble());
            Point c = new Point(sc.nextDouble(), sc.nextDouble());

            double ab = a.distance(b);
            double bc = b.distance(c);
            double ca = c.distance(a);

            if (ab + bc <= ca || ab + ca <= bc || bc + ca <= ab) {
                System.out.println("INVALID");
            } else {
                double p = (ab + bc + ca) / 2;
                double s = Math.sqrt(p * (p - ab) * (p - bc) * (p - ca));
                System.out.printf("%.2f\n", s);
            }
        }
    }
}

class Point {
    private double x, y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double distance(Point other) {
        return Math.sqrt(Math.pow(x - other.x, 2) + Math.pow(y - other.y, 2));
    }
}
