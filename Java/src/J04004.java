import java.util.Scanner;

public class J04004 {
    public static void main(String[] args) {      
        PS a = new PS();
        PS b = new PS();
        a.Input();
        b.Input();
        PS c = a.Add(b);
        c.Output();
    }
}

class PS {
    private long x; // tử số
    private long y; // mẫu số

    public PS() {
        x = 1;
        y = 1;
    }

    static Scanner sc = new Scanner(System.in);

    public PS(long x, long y) {
        this.x = x;
        this.y = y;
    }

    void Input() {
        x = sc.nextLong();
        y = sc.nextLong();
    }

    void Output() {
        System.out.printf("%d/%d\n", x, y);
    }

    // Hàm tính GCD
    private long gcd(long a, long b) {
        while (b != 0) {
            long tmp = b;
            b = a % b;
            a = tmp;
        }
        return a;
    }

    // Hàm cộng 2 phân số
    PS Add(PS a) {
        PS b = new PS();
        b.y = y * a.y; // mẫu = y1 * y2
        b.x = x * a.y + y * a.x; // tử = x1*y2 + x2*y1

        long g = gcd(Math.abs(b.x), Math.abs(b.y)); // Tính GCD của tử và mẫu
        b.x /= g;
        b.y /= g;

        return b;
    }
}
