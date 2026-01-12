import java.util.*; 

class KhachHang{
    private String makh, ten, gioitinh, ngaysinh, dc; 
    static int makhcnt = 1; 
    public KhachHang(String makh, String ten, String gioitinh, String ngaysinh, String dc) {
        this.ten = ten;
        this.gioitinh = gioitinh;
        this.ngaysinh = ngaysinh;
        this.dc = dc;
        this.makh = makh;  
    }

    public String getMakh() {
        return makh;
    }

    public void setMakh(String makh) {
        this.makh = makh;
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

    public static int getMakhcnt() {
        return makhcnt;
    }

    public static void setMakhcnt(int makhcnt) {
        KhachHang.makhcnt = makhcnt;
    }
    
}
class MatHang{
    private String mamh, tenmh, dv; 
    private long giamua, giaban; 
    static int cntmh = 1; 
    public MatHang(String mamh, String tenmh, String dv, long giamua, long giaban) {
        this.tenmh = tenmh;
        this.dv = dv;
        this.giamua = giamua;
        this.giaban = giaban;
        this.mamh = mamh; 
    }

    public String getMamh() {
        return mamh;
    }

    public void setMamh(String mamh) {
        this.mamh = mamh;
    }

    public String getTenmh() {
        return tenmh;
    }

    public void setTenmh(String tenmh) {
        this.tenmh = tenmh;
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

    public static int getCntmh() {
        return cntmh;
    }

    public static void setCntmh(int cntmh) {
        MatHang.cntmh = cntmh;
    }
    
}
class HoaDon implements Comparable<HoaDon>{
    private String mahoadon, tenkh, dc, tenmh; 
    private long sl, gm, gb, loinhuan; 
    static int cnt = 1; 
    public HoaDon(KhachHang a, MatHang b, long sl){
        this.mahoadon = String.format("HD%03d", cnt++); 
        this.tenkh = a.getTen(); 
        this.dc = a.getDc(); 
        this.tenmh = b.getTenmh(); 
        this.gm = b.getGiamua(); 
        this.gb = b.getGiaban(); 
        this.sl = sl; 
        this.loinhuan = (this.gb - this.gm) * this.sl; 
    }
    private long getThanhTien(){
        return this.gb * this.sl; 
    }
    @Override 
    public String toString(){
        return mahoadon + " " + tenkh + " " + dc + " " + tenmh + " " + sl + " " + getThanhTien() + " " + loinhuan; 
    }
    @Override 
    public int compareTo(HoaDon other){
        return Long.compare(other.loinhuan, this.loinhuan); 
    }
}
public class J06006_QuanLyBanHang2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int nkh = Integer.parseInt(sc.nextLine()); 
        Map<String, KhachHang> mapkh = new HashMap<>(); 
        for(int i = 0; i < nkh; i++){
            String ma = String.format("KH%03d", i + 1);
            KhachHang a = new KhachHang(ma, sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()); 
            mapkh.put(ma, a); 
        }
        int nmh = Integer.parseInt(sc.nextLine()); 
        Map<String, MatHang> mapmh = new HashMap<>(); 
        for(int i = 0; i < nmh; i++){
            String ma = String.format("MH%03d", i + 1); 
            MatHang b = new MatHang(ma, sc.nextLine(), sc.nextLine(), Long.parseLong(sc.nextLine()), Long.parseLong(sc.nextLine())); 
            mapmh.put(ma, b); 
        }
        int nhd = Integer.parseInt(sc.nextLine()); 
        List<HoaDon> list = new ArrayList<>(); 
        for(int i = 0; i < nhd; i++){
            String []s = sc.nextLine().trim().split("\\s+"); 
            String makh = s[0]; 
            String mamh = s[1]; 
            long sl = Long.parseLong(s[2]); 
            list.add(new HoaDon(mapkh.get(makh), mapmh.get(mamh), sl)); 
        }
        Collections.sort(list);
        for(HoaDon i : list){
            System.out.println(i);
        }
    }
}
