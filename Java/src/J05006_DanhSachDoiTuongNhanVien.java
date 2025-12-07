import java.util.*; 
class NhanVien{
    private String ma, ten, gioitinh, ngaysinh, dc, mathue, ngay; 
    static int cnt = 1; 
    public NhanVien(String ten, String gioitinh, String ngaysinh, String dc, String mathue, String ngay) {
        this.ten = ten;
        this.gioitinh = gioitinh;
        this.ngaysinh = ngaysinh;
        this.dc = dc;
        this.mathue = mathue;
        this.ngay = ngay;
        this.ma = String.format("%05d", cnt++); 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + gioitinh + " " + ngaysinh + " " + dc + " " + mathue + " " + ngay; 
    }
}
public class J05006_DanhSachDoiTuongNhanVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<NhanVien> list = new ArrayList<>(); 
        
        while(t-- > 0){
            list.add(new NhanVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine())); 
        }
        for(NhanVien i : list){
            System.out.println(i);
        }
    }
}
