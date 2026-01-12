import java.util.*; 
class GiangVien {
    private String maGV, tenGV;
    private double tongGio;

    public GiangVien(String maGV, String tenGV) {
        this.maGV = maGV;
        this.tenGV = tenGV;
        this.tongGio = 0;
    }

    public void addGio(double gio) {
        this.tongGio += gio;
    }

    public String getTenGV() {
        return tenGV;
    }

    @Override
    public String toString() {
        return tenGV + " " + String.format(Locale.US, "%.2f", tongGio);
    }
}
public class J06007_BangTinhGioChuan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int nMon = Integer.parseInt(sc.nextLine());
        for (int i = 0; i < nMon; i++) {
            sc.nextLine(); 
        }
        int nGV = Integer.parseInt(sc.nextLine());
        Map<String, GiangVien> mapGV = new LinkedHashMap<>(); // Dùng LinkedHashMap để giữ thứ tự nhập
        for (int i = 0; i < nGV; i++) {
            String line = sc.nextLine();
            String ma = line.substring(0, line.indexOf(" "));
            String ten = line.substring(line.indexOf(" ") + 1);
            mapGV.put(ma, new GiangVien(ma, ten));
        }

        // 3. Đọc lớp học phần và tính tổng giờ
        int nLop = Integer.parseInt(sc.nextLine());
        for (int i = 0; i < nLop; i++) {
            String maGV = sc.next();
            String maMon = sc.next();
            double gio = sc.nextDouble();
            
            if (mapGV.containsKey(maGV)) {
                mapGV.get(maGV).addGio(gio);
            }
        }

        // 4. In kết quả
        for (GiangVien gv : mapGV.values()) {
            System.out.println(gv);
        }
    }
}
