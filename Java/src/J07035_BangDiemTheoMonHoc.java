import java.util.*; 
import java.io.*; 
import java.text.*; 
class MH7035{
    public String ma, ten, tin; 

    public MH7035(String ma, String ten, String tin) {
        this.ma = ma;
        this.ten = ten;
        this.tin = tin;
    }
    
}
class SV7035{
    public String ma, ten, lop, email; 

    public SV7035(String ma, String ten, String lop, String email) {
        this.ma = ma;
        this.ten = ch(ten);
        this.lop = lop;
        this.email = email;
    }
    private String ch(String s){
        String tmp[] = s.trim().split("\\s+"); 
        String ans = ""; 
        for(int i = 0; i < tmp.length; i++){
            ans += tmp[i].substring(0, 1).toUpperCase() + tmp[i].substring(1).toLowerCase(); 
            if(i < tmp.length - 1) ans += " "; 
        }
        return ans ;
    }
}
class BD7035 implements Comparable<BD7035>{
    public String masv, mamh, tensv, lop, tenmh; 
    public double diem; 

    public BD7035(String masv, String mamh, double diem, SV7035 a, MH7035 b) {
        this.masv = masv;
        this.mamh = mamh; 
        this.diem = diem; 
        this.tensv = a.ten; 
        this.lop = a.lop; 
        this.tenmh = b.ten; 
    }
    private String Format(){
        DecimalFormat df = new DecimalFormat("#.##"); 
        return df.format(diem); 
    }
    @Override 
    public String toString(){
        String diemStr = (diem == (int) diem) ? String.valueOf((int) diem) : String.valueOf(diem);
        return masv +  " " + tensv + " " + lop + " " + Format(); 
    }
    @Override
    public int compareTo(BD7035 other){
        if(diem == other.diem){
            return masv.compareTo(other.masv); 
        }
        return Double.compare(other.diem, diem); 
    }
}
public class J07035_BangDiemTheoMonHoc {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc1 = new Scanner (new File("SINHVIEN.in")); 
        Scanner sc2 = new Scanner (new File("MONHOC.in")); 
        Scanner sc3 = new Scanner (new File("BANGDIEM.in")); 
        Map<String, SV7035> mapSV = new HashMap<>(); 
        Map<String, MH7035> mapMH = new HashMap<>(); 
        List<BD7035> list = new ArrayList<>(); 
        int n = Integer.parseInt(sc1.nextLine());
        for(int i = 0; i < n; i++){
            String ma = sc1.nextLine(); 
            String ten = sc1.nextLine(); 
            String lop = sc1.nextLine();
            String email = sc1.nextLine(); 
            mapSV.put(ma, new SV7035(ma, ten, lop, email)); 
        }
        int m = Integer.parseInt(sc2.nextLine()); 
        for(int i = 0; i < m; i++){
            String ma = sc2.nextLine(); 
            String ten = sc2.nextLine(); 
            String tin = sc2.nextLine(); 
            mapMH.put(ma, new MH7035(ma, ten, tin)); 
        }
        int k = Integer.parseInt(sc3.nextLine()); 
        for(int i = 0; i < k; i++){
            String []s = sc3.nextLine().split("\\s+");
            list.add(new BD7035(s[0], s[1], Double.parseDouble(s[2]), mapSV.get(s[0]), mapMH.get(s[1]))); 
        }
        int q = Integer.parseInt(sc3.nextLine()); 
        Collections.sort(list);
        while(q-- > 0){
            String tmp = sc3.nextLine(); 
            System.out.println("BANG DIEM MON " + mapMH.get(tmp).ten + ":");
            for(BD7035 i : list){
                if(i.mamh.equals(tmp)){
                    System.out.println(i);
                }
            }
        }
    }
}
