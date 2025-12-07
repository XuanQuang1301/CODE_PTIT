import java.util.*; 
class GiaBan {
    private String ma; 
    private Double gia, soluong, giaban; 
    private Double thue, phivc; 
    public GiaBan(String ma, Double gia, Double soluong) {
        this.ma = ma;
        this.gia = gia;
        this.soluong = soluong;
        String tmp = ma.substring(0, 1); 
        if(tmp.equals("T")){
            this.thue = 0.29; 
            this.phivc = 0.04; 
        }else if(tmp.equals("C")){
            this.thue = 0.1; 
            this.phivc = 0.03;
        }else if(tmp.equals("D")){
            this.thue = 0.08; 
            this.phivc = 0.025;
        }else{
            this.thue = 0.02; 
            this.phivc = 0.005; 
        }
        String chungtu = ma.substring(3); 
        if(chungtu.equals("C")){
            this.thue = this.thue - this.thue * 0.05; 
        }
    }
    private Double getTongTien(){
        Double tmp = this.soluong * this.gia; 
        tmp = tmp + tmp * this.thue + tmp * this.phivc; 
        tmp = tmp * 1.2; 
        return tmp; 
    }
    @Override
    public String toString(){
        return ma + " " + String.format("%.2f", getTongTien() / this.soluong); 
    }
}
public class J05073_TinhToanGiaBan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine()); 
        List<GiaBan> list = new ArrayList<>(); 
        for(int i = 0; i < n; i++){
            String []s = sc.nextLine().split("\\s+"); 
            String ma = s[0]; 
            Double gia = Double.parseDouble(s[1]);
            Double soluong = Double.parseDouble(s[2]);
            list.add(new GiaBan(ma, gia, soluong)); 
        }
        for(GiaBan i : list){
            System.out.println(i);
        }
    }
}
