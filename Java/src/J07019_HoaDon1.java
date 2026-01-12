import java.util.*; 
import java.io.*; 
class Sp{
    private String ma, ten; 
    private long gia1, gia2; 

    public Sp(String ma, String ten, long gia1, long gia2) {
        this.ma = ma;
        this.ten = ten;
        this.gia1 = gia1;
        this.gia2 = gia2;
    }

    public String getMa() {
        return ma;
    }

    public String getTen() {
        return ten;
    }

    public long getGia1() {
        return gia1;
    }

    public long getGia2() {
        return gia2;
    }
    
}
class HoaDon7019{
    private String mahd, tensp; 
    private long sl, gia, giamgia; 
    static int cnt = 1; 
    public HoaDon7019(String mahd, long sl, Sp a) {
        this.mahd = mahd;
        this.sl = sl;
        this.tensp = a.getTen(); 
        String i = mahd.substring(2, 3); 
        this.mahd = mahd + "-" + String.format("%03d", cnt++); 
        if(i.equals("1")){
            this.gia = a.getGia1(); 
        }
        else this.gia = a.getGia2(); 
        this.gia *= sl; 
        if(sl >= 150) this.giamgia = this.gia/2; 
        else if(sl >= 100) this.giamgia = this.gia * 30 / 100; 
        else if(sl >= 50) this.giamgia = this.gia * 15  /100; 
    }
    @Override 
    public String toString(){
        return mahd + " " + tensp + " " + giamgia + " " + (gia - giamgia); 
    }
}
public class J07019_HoaDon1 {
    public static void main(String[] args)throws IOException, FileNotFoundException {
        Scanner sc1 = new Scanner(new File("DATA1.in")); 
        Map<String, Sp> mapsp = new HashMap<>(); 
        int n = Integer.parseInt(sc1.nextLine()); 
        for(int i = 0; i < n; i++){
            String ma = sc1.nextLine(); 
            String ten = sc1.nextLine();
            long gia1 = Long.parseLong(sc1.nextLine()); 
            long gia2 = Long.parseLong(sc1.nextLine()); 
            mapsp.put(ma, new Sp(ma, ten, gia1, gia2)); 
        }
        List<HoaDon7019> list = new ArrayList<>(); 
        Scanner sc2 = new Scanner(new File("DATA2.in"));
        int m = Integer.parseInt(sc2.nextLine()); 
        for(int i = 0; i < m; i++){
            String s[] = sc2.nextLine().split("\\s+"); 
            String tmp = s[0].substring(0, 2); 
            list.add(new HoaDon7019(s[0], Long.parseLong(s[1]), mapsp.get(tmp))); 
        }
        for(HoaDon7019 i : list){
            System.out.println(i);
        }
    }
}
