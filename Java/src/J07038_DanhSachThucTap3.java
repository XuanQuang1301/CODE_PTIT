import java.util.*; 
class SinhVien7038 implements Comparable<SinhVien7038>{
    private String ma, ten, lop, email; 

    public SinhVien(String ma, String ten, String lop, String email) {
        this.ma = ma;
        this.ten = ten;
        this.lop = lop;
        this.email = email;
    }

    public String getMa() {
        return ma;
    }

    public void setMa(String ma) {
        this.ma = ma;
    }

    public String getTen() {
        return ten;
    }

    public void setTen(String ten) {
        this.ten = ten;
    }

    public String getLop() {
        return lop;
    }

    public void setLop(String lop) {
        this.lop = lop;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
    @Override 
    public int compareTo(SinhVien7038 other){
        return ma.compareTo(other.ma); 
    }
}
class DoanhNghiep{
    private String madn, tendn; 
    private int cnt; 

    public DoanhNghiep(String madn, String tendn, int cnt) {
        this.madn = madn;
        this.tendn = tendn;
        this.cnt = cnt;
    }
    
}
class ThucTap{
    
}
public class J07038_DanhSachThucTap3 {
    
}
