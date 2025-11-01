import java.util.*; 
import java.io.*; 

public class J07081_SapXepDanhSachSinhVien {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc = new Scanner(new File("SINHVIEN.in")); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<SinhVien1> sinhvien = new ArrayList<>(); 
        for(int i = 0; i < t; i++){
            sinhvien.add(new SinhVien1(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine())); 
        }
        Collections.sort(sinhvien);
        for (SinhVien1 i : sinhvien){
            System.out.println(i);
        }
    }
}
class SinhVien1 implements Comparable<SinhVien1> {
    private String ma, ten, sdt, email; 

    public SinhVien1(String ma, String ten, String sdt, String email) {
        this.ma = ma;
        this.ten = ten;
        this.sdt = sdt;
        this.email = email;
    }
    public String getTen(){
        return ten; 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + sdt + " " + email; 
    }
    @Override 
    public int compareTo(SinhVien1 a){
        String [] s1 = a.ten.trim().split("\\s+"); 
        String [] s2 = this.ten.trim().split("\\s+"); 
        int n = s1.length, m = s2.length; 
        
        if(s1[n - 1].equals(s2[m - 1])){
            if(s1[0].equals(s2[0])){
                String tmp1 = "", tmp2 = ""; 
                for(int i = 1; i < n - 1; i++){
                    tmp1 += s1[i]; 
                }
                for(int i = 1; i < m - 1; i++){
                    tmp2 += s2[i]; 
                }
                return tmp2.compareTo(tmp1); 
            }
            return s2[0].compareTo(s1[0]); 
        }
        return s2[m - 1].compareTo(s1[n - 1]);
    }
}