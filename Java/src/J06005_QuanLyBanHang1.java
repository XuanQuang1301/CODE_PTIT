import java.util.*; 
class KhacHang6005{
    private String ma, ten, gioitinh, ngaysinh, dc; 
    static int cnt = 1; 

    public KhacHang6005(String ten, String gioitinh, String ngaysinh, String dc) {
        this.ten = ten;
        this.gioitinh = gioitinh;
        this.ngaysinh = ngaysinh;
        this.dc = dc;
        this.ma = String.format("KH%03d", cnt++); 
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

    public String getDc() {
        return dc;
    }

    public void setDc(String dc) {
        this.dc = dc;
    } 
}
class MatHang6005{
    private String ma, ten, dv;
    private long giamua, giaban; 
    static int cnt2 = 1; 
    public MatHang6005(String ten, String dv, long giamua, long giaban) {
        this.ten = ten;
        this.dv = dv;
        this.giamua = giamua;
        this.giaban = giaban;
        this.ma = String.format("MH%03d", cnt2++); 
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

    public long getGiamua() {
        return giamua;
    }

    public void setGiamua(long giamua) {
        this.giamua = giamua;
    }

    public long getGiaban() {
        return giaban;
    }

    public void setGiaban(long giaban) {
        this.giaban = giaban;
    }
}
class HoaDon6005{
    private String ma; 
    private long count, sum; 
    private KhacHang6005 khachhang; 
    private MatHang6005 mathang; 
    static int cnt2 = 1; 
    public HoaDon6005(long count, KhacHang6005 a, MatHang6005 b) {
        this.ma = String.format("HD%03d", cnt2++);
        this.khachhang = a; 
        this.mathang = b; 
        this.sum = mathang.getGiaban() * count; 
        this.count = count; 
    }
    @Override 
    public String toString(){
        return ma + " " + khachhang.getTen() + " " + khachhang.getDc() + " " + mathang.getTen() + " " + mathang.getDv() + " " + mathang.getGiamua() + " " + mathang.getGiaban() + " " + count + " " + sum; 
    }
}
public class J06005_QuanLyBanHang1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        HashMap<String, KhacHang6005> khachhang = new HashMap<>(); 
        int t = Integer.parseInt(sc.nextLine()); 
        for(int i = 0; i < t; i++){
            KhacHang6005 tmp = new KhacHang6005(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()); 
            khachhang.put(tmp.getMa(), tmp); 
        }
        t = Integer.parseInt(sc.nextLine());
        HashMap<String, MatHang6005> mathang = new HashMap<>(); 
        for(int i = 0; i < t; i++){
            MatHang6005 tmp = new MatHang6005(sc.nextLine(), sc.nextLine(), Long.parseLong(sc.nextLine()), Long.parseLong(sc.nextLine())); 
            mathang.put(tmp.getMa(), tmp); 
        }
        List<HoaDon6005> hoadon = new ArrayList<>(); 
        t = Integer.parseInt(sc.nextLine());
        for(int i = 0; i < t; i++){
            String [] s = sc.nextLine().split("\\s+"); 
            String makh = s[0]; 
            String mamh = s[1]; 
            long sl = Long.parseLong(s[2]); 
            hoadon.add(new HoaDon6005(sl, khachhang.get(makh), mathang.get(mamh))); 
        }
        for(HoaDon6005 i : hoadon){
            System.out.println(i);
        }
    }
}
