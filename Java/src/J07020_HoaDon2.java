import java.util.*; 
import java.io.*; 
class KhachHang7020{
    private String makh, tenkh, gioitinh, ngaysinh, dc; 

    public KhachHang7020(String makh, String tenkh, String gioitinh, String ngaysinh, String dc) {
        this.makh = makh;
        this.tenkh = tenkh;
        this.gioitinh = gioitinh;
        this.ngaysinh = ngaysinh;
        this.dc = dc;
    }

    public String getMakh() {
        return makh;
    }

    public String getTenkh() {
        return tenkh;
    }

    public String getGioitinh() {
        return gioitinh;
    }

    public String getNgaysinh() {
        return ngaysinh;
    }

    public String getDc() {
        return dc;
    }
    
}
class MatHang7020{
    private String mamh, tenmh, dv; 
    private long giamua, giaban; 

    public MatHang7020(String mamh, String tenmh, String dv, long giamua, long giaban) {
        this.mamh = mamh;
        this.tenmh = tenmh;
        this.dv = dv;
        this.giamua = giamua;
        this.giaban = giaban;
    }

    public String getMamh() {
        return mamh;
    }

    public String getTenmh() {
        return tenmh;
    }

    public String getDv() {
        return dv;
    }

    public long getGiamua() {
        return giamua;
    }

    public long getGiaban() {
        return giaban;
    }
    
}
class HoaDon7020{
    private String mahd, makh, mamh, tenkh, dc, tenmh, dv; 
    private long sl, giamua, giaban, tong; 

    public HoaDon7020(String mahd, String makh, String mamh, long sl, KhachHang7020 a, MatHang7020 b) {
        this.mahd = mahd;
        this.makh = makh;
        this.mamh = mamh;
        this.sl = sl;
        this.tenkh = a.getTenkh(); 
        this.dc = a.getDc(); 
        this.tenmh = b.getTenmh(); 
        this.dv = b.getDv();
        this.giaban = b.getGiaban(); 
        this.giamua = b.getGiamua(); 
        this.tong = this.giaban * this.sl; 
    }
    @Override 
    public String toString(){
    return mahd + " " + tenkh + " " + dc + " " + tenmh + " " + dv + " " + giamua + " " + giaban + " " + sl + " " + tong; 
    }
}
public class J07020_HoaDon2 {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc1 = new Scanner(new File("KH.in")); 
        int nkh = Integer.parseInt(sc1.nextLine()); 
        Map<String, KhachHang7020> mapKhach = new HashMap<>(); 
        for(int i = 0; i < nkh; i++){
            String ma = String.format("KH%03d", i + 1); 
            String ten = sc1.nextLine(); 
            String gt = sc1.nextLine(); 
            String ngay = sc1.nextLine(); 
            String dc = sc1.nextLine(); 
            mapKhach.put(ma, new KhachHang7020(ma, ten, gt, ngay, dc)); 
        }
        Scanner sc2 = new Scanner(new File("MH.in")); 
        int nmh = Integer.parseInt(sc2.nextLine()); 
        Map<String, MatHang7020> mapMH = new HashMap<>();
        for(int i = 0; i < nmh; i++){
            String code = String.format("MH%03d", i + 1); 
            String ten = sc2.nextLine(); 
            String dv = sc2.nextLine(); 
            long gm = Long.parseLong(sc2.nextLine()); 
            long gb = Long.parseLong(sc2.nextLine()); 
            mapMH.put(code, new MatHang7020(code, ten, dv, gm, gb));
        }
        List<HoaDon7020> list = new ArrayList<>(); 
        Scanner sc3 = new Scanner(new File("HD.in")); 
        int t = Integer.parseInt(sc3.nextLine()); 
        for(int i = 0; i < t; i++){
            String [] s = sc3.nextLine().split("\\s+"); 
            String code = String.format("HD%03d", i + 1); 
            list.add(new HoaDon7020(code, s[0], s[1],Long.parseLong(s[2]), mapKhach.get(s[0]), mapMH.get(s[1]))); 
        }
        for(HoaDon7020 i : list){
            System.out.println(i);
        }
    }
}
