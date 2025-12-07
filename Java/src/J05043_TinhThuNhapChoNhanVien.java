import java.util.*; 
class NhanVien5043 {
    private String ma, ten, chucvu; 
    private float luong, phucap, tamung; 
    private int socong; 
    public static int cnt = 1; 

    public NhanVien5043(String ten, String chucvu, float luong, int socong) {
        this.ten = ten;
        this.chucvu = chucvu;
        this.luong = luong * socong;
        this.socong = socong;
        this.ma = chucvu + String.format("%02d", cnt++); 
        this.phucap = setPhuCap(chucvu); 
        this.tamung =  setTamung(); 
    }
    private float setTamung(){
        float tmp = (this.phucap + this.luong) * (2f / 3f); 
        if(tmp < 25000){
            return Math.round(tmp / 1000) * 1000; 
        }
        return 25000; 
    }
    private int setPhuCap(String s){
        if(s.equals("GD")) return 500; 
        else if(s.equals("PGD")) return 400; 
        else if(s.equals("TP")) return 300; 
        else if(s.equals("KT")) return 250; 
        return 100; 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + (int)phucap + " " + (int)luong + " " + (int)this.tamung + " " + (int)(this.luong + this.phucap - this.tamung); 
    }
}
public class J05043_TinhThuNhapChoNhanVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int n = Integer.parseInt(sc.nextLine()); 
        List<NhanVien5043> list = new ArrayList<>(); 
        for(int i = 0; i < n; i++){
            String ten = sc.nextLine(); 
            String chucvu = sc.nextLine(); 
            float luong = Float.parseFloat(sc.nextLine()); 
            int socong = Integer.parseInt(sc.nextLine()); 
            list.add(new NhanVien5043(ten, chucvu, luong, socong)); 
        }
        for(NhanVien5043 i: list){ 
            System.out.println(i);
        }
    }
}
