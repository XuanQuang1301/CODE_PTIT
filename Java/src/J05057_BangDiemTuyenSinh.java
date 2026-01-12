import java.util.*; 
import java.text.*; 

class TuyenSinh{
    private String ma, ten, status; 
    private double x, y, z, ut, sum; 
    public TuyenSinh(String ma, String ten, double x, double y, double z){
        this.ma = ma; 
        this.ten = ten; 
        this.sum = x * 2 + y + z; 
        String tmp = ma.substring(0, 3); 
        if(tmp.equals("KV1")) this.ut = 0.5; 
        else if(tmp.equals("KV2")) this.ut = 1.0; 
        else this.ut = 2.5; 
        if(this.sum + this.ut < 24) this.status = "TRUOT"; 
        else this.status = "TRUNG TUYEN"; 
    }
    private String chuanhoa(double n){
        if(n == (long) n) return String.format("%d", (long)n); 
        return String.format("%.1f", n); 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + chuanhoa(ut) + " " + chuanhoa(sum) + " " + status; 
    }
}
public class J05057_BangDiemTuyenSinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<TuyenSinh> list = new ArrayList<>(); 
        while(t-- > 0){
            list.add(new TuyenSinh(sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()))); 
        }
        for (TuyenSinh i : list){
            System.out.println(i);
        }
    }
}
