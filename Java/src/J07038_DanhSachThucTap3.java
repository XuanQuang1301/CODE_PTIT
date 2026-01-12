import java.util.*; 
import java.io.*; 

class SinhVien7038 implements Comparable<SinhVien7038>{
    private String ma, ten, lop, email; 

    public SinhVien7038(String ma, String ten, String lop, String email) {
        this.ma = ma;
        this.ten = chuanhoa(ten);
        this.lop = lop;
        this.email = email;
    }
    private String chuanhoa(String s){
        String tmp[] = s.toLowerCase().trim().split("\\s+"); 
        String ans = ""; 
        for(int i = 0; i < tmp.length; i++){
            ans += tmp[i].substring(0, 1).toUpperCase() + tmp[i].substring(1).toLowerCase(); 
            if(i < tmp.length - 1) ans += " "; 
        }
        return ans; 
    }
    public String getMa() {
        return ma;
    }

    public void setMa(String ma) {
        this.ma = ma;
    }

    public String getTen() {
        return ten;
    }

    public void setTen(String ten) {
        this.ten = ten;
    }

    public String getLop() {
        return lop;
    }

    public void setLop(String lop) {
        this.lop = lop;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
    @Override 
    public int compareTo(SinhVien7038 other){
        return ma.compareTo(other.ma); 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + lop; 
    }
}
class DoanhNghiep{
    private String madn, tendn; 
    private int soluong; 

    public DoanhNghiep(String madn, String tendn, int cnt) {
        this.madn = madn;
        this.tendn = tendn;
        this.soluong = cnt;
    }

    public String getTendn() {
        return tendn;
    }

    public int getSoluong() {
        return soluong;
    }
    
}
public class J07038_DanhSachThucTap3 {
    public static void main(String[] args)throws Exception, FileNotFoundException {
        Scanner sc = new Scanner(new File("SINHVIEN.in")); 
        Map<String, SinhVien7038> mapSV = new HashMap<>(); 
        int nSV = Integer.parseInt(sc.nextLine()); 
        for (int i = 0; i < nSV; i++){
            String ma = sc.nextLine(); 
            String ten = sc.nextLine(); 
            String lop = sc.nextLine(); 
            String email = sc.nextLine(); 
            mapSV.put(ma, new SinhVien7038(ma, ten, lop, email)); 
        }
        Scanner scDN = new Scanner(new File("DN.in"));
        int nDN = Integer.parseInt(scDN.nextLine());
        Map<String, DoanhNghiep> mapDN = new HashMap<>();
        for (int i = 0; i < nDN; i++) {
            String ma = scDN.nextLine().trim();
            String ten = scDN.nextLine().trim();
            int sl = Integer.parseInt(scDN.nextLine().trim());
            mapDN.put(ma, new DoanhNghiep(ma, ten, sl));
        }
        Scanner scTT = new Scanner(new File("THUCTAP.in")); 
        int ntt = Integer.parseInt(scTT.nextLine()); 
        Map<String, List<SinhVien7038>> dsThucTap = new HashMap<>(); 
        for(int i = 0; i < ntt; i++){
            String []s = scTT.nextLine().trim().split("\\s+"); 
            String maSV = s[0];  
            String maDN = s[1]; 
            dsThucTap.putIfAbsent(maDN, new ArrayList<>()); 
            if(mapSV.containsKey(maSV)){
                dsThucTap.get(maDN).add(mapSV.get(maSV)); 
            }
        }
        int t = Integer.parseInt(scTT.nextLine()); 
        while(t-- > 0){
            String ma = scTT.nextLine(); 
            DoanhNghiep dn = mapDN.get(ma); 
            if(dn != null){
                System.out.println("DANH SACH THUC TAP TAI " + dn.getTendn() + ":");
                List<SinhVien7038> list = dsThucTap.get(ma); 
                if(list != null){
                    Collections.sort(list);
                    int limit = Math.min(list.size(), dn.getSoluong()); 
                    for(int i = 0; i < limit; i++){
                        System.out.println(list.get(i));
                    }   
                }
            }
        }
    }
}
