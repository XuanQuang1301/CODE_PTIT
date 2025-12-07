import java.util.*;

class HocSinh5018 implements Comparable<HocSinh5018> {
    private String ma, ten, status;
    private double diem; // Nên dùng double cho chính xác hơn float
    static int cnt = 1;

    public HocSinh5018(String ten, String[] arr) {
        this.ten = ten;
        double tong = 0;
        
        // Môn 1, 2 nhân hệ số 2
        tong += Double.parseDouble(arr[0]) * 2;
        tong += Double.parseDouble(arr[1]) * 2;
        
        // Các môn còn lại hệ số 1
        for (int i = 2; i < 10; i++) {
            tong += Double.parseDouble(arr[i]);
        }
        
        // Tính trung bình
        tong /= 12;
        
        // QUAN TRỌNG: Làm tròn đến 1 chữ số thập phân TRƯỚC khi xếp loại
        // Công thức làm tròn: nhân 10 -> làm tròn -> chia 10
        this.diem = Math.round(tong * 10.0) / 10.0;
        
        this.ma = String.format("HS%02d", cnt++);
        
        if (this.diem >= 9) this.status = "XUAT SAC";
        else if (this.diem >= 8) this.status = "GIOI";
        else if (this.diem >= 7) this.status = "KHA";
        else if (this.diem >= 5) this.status = "TB";
        else this.status = "YEU";
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + String.format("%.1f", diem) + " " + status;
    }

    @Override
    public int compareTo(HocSinh5018 other) {
        if (this.diem == other.diem) {
            return this.ma.compareTo(other.ma); // Điểm bằng nhau thì xếp theo mã tăng dần
        }
        return Double.compare(other.diem, this.diem); // Điểm giảm dần
    }
}

public class J05018_BangDiemHocSinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        List<HocSinh5018> arr = new ArrayList<>();
        
        while (t-- > 0) {
            String ten = sc.nextLine();
            // trim() để xóa khoảng trắng thừa đầu cuối tránh lỗi parse
            String[] tmp = sc.nextLine().trim().split("\\s+");
            arr.add(new HocSinh5018(ten, tmp));
        }
        
        Collections.sort(arr);
        
        for (HocSinh5018 i : arr) {
            System.out.println(i);
        }
    }
}