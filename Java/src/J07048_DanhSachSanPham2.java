import java.util.*; 
import java.io.*; 
import java.text.*; 
class SanPham implements Comparable<SanPham>{
    private String ma, ten; 
    private int giaban, baohanh; 

    public SanPham(String ma, String ten, int giaban, int baohanh) {
        this.ma = ma; 
        this.ten = ten;
        this.giaban = giaban;
        this.baohanh = baohanh;
    }

    public String getMa() {
        return ma;
    }

    public int getGiaban() {
        return giaban;
    }
    
    @Override 
    public String toString(){
        return ma + " " + ten + " " + giaban + " " + baohanh; 
    }
    @Override 
    public int compareTo(SanPham a){
        if(this.giaban == a.getGiaban()){
            return ma.compareTo(a.getMa()); 
        }
        return -(this.giaban - a.getGiaban()); 
    }
}
public class J07048_DanhSachSanPham2 {
    public static void main(String[] args)throws FileNotFoundException{
        Scanner sc = new Scanner(new File("SANPHAM.in")); 
        int n = Integer.parseInt(sc.nextLine()); 
        SanPham [] sp = new SanPham[n]; 
        for(int i = 0; i < n; i++){
            String ma = sc.nextLine(); 
            String ten = sc.nextLine(); 
            int giaban = Integer.parseInt(sc.nextLine()); 
            int baohanh = Integer.parseInt(sc.nextLine()); 
            sp[i] = new SanPham(ma, ten, giaban, baohanh); 
        }
        Arrays.sort(sp);
        for(SanPham i : sp){
            System.out.println(i);
        }
    }
}
