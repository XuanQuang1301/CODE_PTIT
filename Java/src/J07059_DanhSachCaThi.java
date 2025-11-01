import java.util.*;
import java.io.*;
import java.time.*;         // dùng cho LocalDate, LocalTime
import java.time.format.*;  // dùng cho DateTimeFormatter

class CaThi implements Comparable<CaThi> {
    private String ma, phongthi;
    private LocalDate ngaythi;
    private LocalTime giothi;
    public static int cnt = 1;

    public CaThi(String ngaythi, String giothi, String phongthi) {
        // Định dạng của ngày và giờ trong file:  dd/MM/yyyy  và  HH:mm
        DateTimeFormatter dfNgay = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        DateTimeFormatter dfGio  = DateTimeFormatter.ofPattern("HH:mm");

        this.ngaythi = LocalDate.parse(ngaythi, dfNgay);
        this.giothi  = LocalTime.parse(giothi, dfGio);
        this.phongthi = phongthi;
        this.ma = "C" + String.format("%03d", cnt++);
    }

    public String getMa() {
        return ma;
    }

    public LocalDate getNgaythi() {
        return ngaythi;
    }

    public LocalTime getGiothi() {
        return giothi;
    }

    @Override
    public String toString() {
        // Định dạng lại khi in ra đúng kiểu ban đầu
        DateTimeFormatter dfNgay = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        DateTimeFormatter dfGio  = DateTimeFormatter.ofPattern("HH:mm");
        return ma + " " + ngaythi.format(dfNgay) + " " + giothi.format(dfGio) + " " + phongthi;
    }

    @Override
    public int compareTo(CaThi a) {
        if (!this.ngaythi.equals(a.getNgaythi()))
            return this.ngaythi.compareTo(a.getNgaythi());
        if (!this.giothi.equals(a.getGiothi()))
            return this.giothi.compareTo(a.getGiothi());
        return this.ma.compareTo(a.getMa());
    }
}

public class J07059_DanhSachCaThi {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("CATHI.in"));
        List<CaThi> list = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String ngaythi = sc.nextLine().trim();
            String giothi = sc.nextLine().trim();
            String phongthi = sc.nextLine().trim();
            list.add(new CaThi(ngaythi, giothi, phongthi));
        }

        Collections.sort(list);
        for (CaThi ct : list) {
            System.out.println(ct);
        }
    }
}
