import java.util.*; 
class HangHoa {
    private String ma, ten, dv; 
    private double gianhap, sl, phivc, thanhtien, giaban; 
    static int cnt = 1; 
    public HangHoa(String ten, String dv, double gianhap, double sl) {
        this.ma = String.format("MH%02d", cnt++); 
        this.ten = ten;
        this.dv = dv;
        this.gianhap = gianhap;
        this.sl = sl;
        this.phivc = 5 * (this.gianhap * this.sl) / 100; 
        this.thanhtien = (this.gianhap * this.sl) + this.phivc; 
        this.giaban = this.thanhtien * 1.02;
    }
    @Override 
    public String toString(){
        return String.format("%s %s %s %.0f %.0f %.0f", ma, ten, dv, phivc, thanhtien, giaban); 
    }
}
public class J05036_TinhGiaBan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<HangHoa> arr = new ArrayList<>(); 
        while(t-- > 0){
            arr.add(new HangHoa(sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()))); 
        }
        for(HangHoa i : arr){
            System.out.println(i);
        }
    }
}
