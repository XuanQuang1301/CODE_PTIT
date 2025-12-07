import java.util.*; 

public class J05004_DanhSachDoiTuongSinhVien2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in); 
        List<SinhVien5004> list = new ArrayList<>(); 
        int n = Integer.parseInt(sc.nextLine()); 
        for(int i = 0; i < n; i++){
            list.add(new SinhVien5004(sc.nextLine(), sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()))); 
        }
        for(SinhVien5004 i : list){
            System.out.println(i);
        }
    }
}
class SinhVien5004 {
    private String ma, ten, lop, ngaysinh; 
    private double gpa; 
    public static int cnt = 1; 

    public SinhVien5004(String ten, String lop, String ngaysinh, double gpa) {
        this.ten = chuanhoa2(ten);
        this.lop = lop;
        this.ngaysinh = chuanhoa1(ngaysinh);
        this.gpa = gpa;
        this.ma = String.format("B20DCCN%02d", cnt++); 
    }
    private String chuanhoa2(String s){
        String [] tmp = s.trim().split("\\s+"); 
        String ans = "";
        for(int i = 0; i < tmp.length; i++){
            ans += tmp[i].substring(0, 1).toUpperCase() + tmp[i].substring(1).toLowerCase(); 
            if(i < tmp.length - 1) ans += " ";
        }
        return ans; 
    }
    private String chuanhoa1(String s){
        if(s.charAt(1) == '/'){
            s = '0' + s;
        }
        if(s.charAt(4) == '/'){
            s = s.substring(0, 3) + '0' + s.substring(3); 
        }
        return s;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + lop + " " + ngaysinh + " " + String.format("%.2f", gpa); 
    }
}
