import java.util.*; 

public class J05003_DanhSachDoiTuongSinhVien1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in); 
        List<SinhVien5003> list = new ArrayList<>(); 
        int n = Integer.parseInt(sc.nextLine()); 
        for(int i = 0; i < n; i++){
            list.add(new SinhVien5003(sc.nextLine(), sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()))); 
        }
        for(SinhVien5003 i : list){
            System.out.println(i);
        }
    }
}
class SinhVien5003 {
    private String ma, ten, lop, ngaysinh; 
    private double gpa; 
    public static int cnt = 1; 

    public SinhVien5003(String ten, String lop, String ngaysinh, double gpa) {
        this.ten = ten;
        this.lop = lop;
        this.ngaysinh = chuanhoa(ngaysinh);
        this.gpa = gpa;
        this.ma = String.format("B20DCCN%02d", cnt++); 
    }
    private String chuanhoa(String s){
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
