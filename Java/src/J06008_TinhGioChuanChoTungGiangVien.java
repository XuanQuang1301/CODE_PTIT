import java.util.*; 
class MonHoc6008{
    public String ma, mon; 

    public MonHoc6008(String ma, String mon) {
        this.ma = ma;
        this.mon = mon;
    }
}
class GV6008{
    public String ma, ten; 

    public GV6008(String ma, String ten) {
        this.ma = ma;
        this.ten = ten;
    }
    
}
class Lop6008{
    public String magv, mamh; 
    public double gio; 

    public Lop6008(String magv, String mamh, double gio) {
        this.magv = magv;
        this.mamh = mamh;
        this.gio = gio;
    }
    
}
public class J06008_TinhGioChuanChoTungGiangVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in); 
        int n = Integer.parseInt(sc.nextLine()); 
        Map<String, String> mapMon = new HashMap<>(); 
        for(int i = 0; i < n; i++){
            String[]s = sc.nextLine().split("\\s+"); 
            String tmp = ""; 
            for(int j = 1; j < s.length; j++){
                tmp += s[j]; 
                if(j < s.length - 1) tmp += " "; 
            }
            mapMon.put(s[0], tmp);
        }
        Map<String, String> mapGv = new HashMap<>(); 
        int m = Integer.parseInt(sc.nextLine()); 
        for(int i = 0; i < m; i++){
            String[] s = sc.nextLine().split("\\s+"); 
            String tmp = ""; 
            for(int j = 1; j < s.length; j++){
                tmp += s[j]; 
                if(j < s.length - 1) tmp += " "; 
            }
            mapGv.put(s[0], tmp); 
        }
        int k = Integer.parseInt(sc.nextLine()); 
        List<Lop6008> list = new ArrayList<>(); 
        for(int i = 0; i < k; i++){
            String []s = sc.nextLine().split("\\s+"); 
            list.add(new Lop6008(s[0], s[1], Double.parseDouble(s[2]))); 
        }
        String macantim = sc.nextLine(); 
        double ans = 0; 
        System.out.println("Giang vien: " + mapGv.get(macantim));
        for(Lop6008 i : list){
            if(i.magv.equals(macantim)){
                System.out.println(mapMon.get(i.mamh) + " " + i.gio);
                ans += i.gio; 
            }
        }
        System.out.println("Tong: " + String.format("%.2f", ans));
    }
}
