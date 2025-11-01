import java.util.*; 
import java.io.FileNotFoundException; 
import java.io.File; 
public class J06009_BaiToanBanHang {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc1 = new Scanner(new File("KH.in")); 
        List<KhachHang> kh = new ArrayList<>(); 
        int t = Integer.parseInt(sc1.nextLine()); 
        while(t-- > 0){
            kh.add(new KhachHang(sc1.nextLine(), sc1.nextLine(), sc1.nextLine(),sc1.nextLine())); 
        }
        
        
        Scanner sc2 = new Scanner(new File("MH.in"));
        int t2 = Integer.parseInt(sc2.nextLine()); 
        List<MatHang> mh = new ArrayList<>(); 
        while(t2-- > 0){
            mh.add(new MatHang(sc2.nextLine(), sc2.nextLine(), Integer.parseInt(sc2.nextLine()),Integer.parseInt(sc2.nextLine()))); 
        }
        
        
        Scanner sc3 = new Scanner(new File("HD.in"));
        int k = Integer.parseInt(sc3.nextLine()); 
        List<HoaDon> hd = new ArrayList<>(); 
        for(int i = 0; i < k; i++){
            String [] ans = sc3.nextLine().split("\\s+"); 
            String khMa = ans[0]; 
            String mhMa = ans[1]; 
            int soLuong = Integer.parseInt(ans[2]); 
            KhachHang kh1 = null; 
            MatHang mh1 = null; 
            for(KhachHang khachhang : kh){
                if(khachhang.getMa().equals(khMa)) kh1 = khachhang; 
            }
            for(MatHang mathang : mh){
                if(mathang.getMa().equals(mhMa)) mh1 = mathang; 
            }
            hd.add(new HoaDon(kh1, mh1, soLuong)); 
        }
        
        
        for(HoaDon hoadon : hd){
            System.out.println(hoadon);
        }
    }
}
class KhachHang {
    private String ma, ten, gioitinh, ngaysinh, diachi; 
    public static int cnt = 1; 
    public KhachHang(String ten, String gioitinh, String ngaysinh, String diachi) {
        this.ten = ten;
        this.gioitinh = gioitinh;
        this.ngaysinh = ngaysinh;
        this.diachi = diachi;
        this.ma = "KH" + String.format("%03d", cnt++); 
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

    public String getGioitinh() {
        return gioitinh;
    }

    public void setGioitinh(String gioitinh) {
        this.gioitinh = gioitinh;
    }

    public String getNgaysinh() {
        return ngaysinh;
    }

    public void setNgaysinh(String ngaysinh) {
        this.ngaysinh = ngaysinh;
    }

    public String getDiachi() {
        return diachi;
    }

    public void setDiachi(String diachi) {
        this.diachi = diachi;
    }
    
}
class MatHang{
    private String ma, ten, dv; 
    private int gm, gb; 
    private int sum; 
    public static int cnt = 1; 

    public MatHang(String ten, String dv, int gm, int gb) {
        this.ten = ten;
        this.dv = dv;
        this.gm = gm;
        this.gb = gb;
        this.ma = "MH" + String.format("%03d", cnt++);
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

    public String getDv() {
        return dv;
    }

    public void setDv(String dv) {
        this.dv = dv;
    }

    public int getGm() {
        return gm;
    }

    public void setGm(int gm) {
        this.gm = gm;
    }

    public int getGb() {
        return gb;
    }

    public void setGb(int gb) {
        this.gb = gb;
    }

    public int getCnt() {
        return cnt;
    }

    public void setCnt(int cnt) {
        this.cnt = cnt;
    }
    
}
class HoaDon{
    private static int cnt = 1; 
    private String ma; 
    private KhachHang kh; 
    private MatHang mh; 
    private int soLuong; 

    public HoaDon(KhachHang kh, MatHang mh, int soLuong) {
        this.kh = kh;
        this.mh = mh;
        this.soLuong = soLuong;
        this.ma = String.format("HD%03d", cnt++); 
    }
    public String toString(){
        int thanhTien = mh.getGb() * soLuong; 
        return String.format("%s %s %s %s %s %d %d %d %d", ma, kh.getTen(), kh.getDiachi(), mh.getTen(), mh.getDv(), mh.getGm(), mh.getGb(), soLuong, thanhTien); 
    }
}