import java.util.*; 
import java.text.DecimalFormat; 
class ThiSinh59 implements Comparable<ThiSinh59>{
    private String ma, ten, trangthai; 
    private double toan, ly, hoa, uutien, tong; 

    public ThiSinh59(String ma, String ten, double toan, double ly, double hoa) {
        this.ma = ma;
        this.ten = ten;
        this.toan = toan;
        this.ly = ly;
        this.hoa = hoa;
        String tmp = ma.substring(0, 3); 
        if(tmp.equals("KV1")){
            this.uutien = 0.5f; 
        }else if(tmp.equals("KV2")){
            this.uutien = 1.0f; 
        }
        else this.uutien = 2.5f;
        this.tong = toan * 2 + ly + hoa + uutien; 
    }
    public static String removeZero(double number){
        DecimalFormat format = new DecimalFormat("#.#"); 
        return format.format(number); 
    }

    public void setTrangthai(String trangthai) {
        this.trangthai = trangthai;
    }

    public String getMa() {
        return ma;
    }

    public double getTong() {
        return tong;
    }
    
    @Override 
    public String toString(){
        return ma + " " + ten + " " + removeZero(uutien) + " " + removeZero(tong) + " " + trangthai; 
    }
    @Override 
    public int compareTo(ThiSinh59 other){
        if(other.getTong() == this.tong){
            return this.ma.compareTo(other.ma); 
        }
        return Double.compare(other.getTong(), this.tong); 
    }
}
public class J05059_XacDinhDanhSachTrungTuyen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int n = Integer.parseInt(sc.nextLine()); 
        List<ThiSinh59> list = new ArrayList<>(); 
        for(int i = 0; i < n; i++){
            String ma = sc.nextLine(); 
            String ten = sc.nextLine(); 
            float toan = Float.parseFloat(sc.nextLine()); 
            float ly = Float.parseFloat(sc.nextLine());            
            float hoa = Float.parseFloat(sc.nextLine()); 
            list.add(new ThiSinh59(ma, ten, toan, ly, hoa)); 
        }
        Collections.sort(list);
        int t = Integer.parseInt(sc.nextLine()); 
        double tmp = list.get(t - 1).getTong(); 
        System.out.println(String.format("%.1f", tmp));
        for(ThiSinh59 i : list){
            if(i.getTong() >= tmp){
                i.setTrangthai("TRUNG TUYEN");
            }
            else i.setTrangthai("TRUOT");
            System.out.println(i);
        }
    }
}
