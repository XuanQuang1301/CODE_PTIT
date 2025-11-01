import java.util.*; 
import java.io.*; 

public class J07056_TinhTienDien {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("KHACHHANG.in")); 
        List<TienDien> tiendien = new ArrayList<>(); 
        int t = Integer.parseInt(sc.nextLine()); 
        while(t-- > 0){
            String name = sc.nextLine(); 
            String part[] = sc.nextLine().trim().split("\\s+"); 
            String dinhmuc = part[0]; 
            int sodau = Integer.parseInt(part[1]); 
            int socuoi = Integer.parseInt(part[2]);
            tiendien.add(new TienDien(name, dinhmuc, sodau, socuoi)); 
        }
        Collections.sort(tiendien);
        for(TienDien i : tiendien){
            System.out.println(i);
        }
    }
}
class TienDien implements Comparable<TienDien> {
    private String ma, ten, dinhmuc; 
    private int sodau, socuoi, tong; 
    private long tientrong, tienngoai; 
    public static int cnt =1; 
    public TienDien(String ten, String dinhmuc, int sodau, int socuoi) {
        this.ten = ten;
        this.dinhmuc = dinhmuc;
        this.sodau = sodau;
        this.socuoi = socuoi;
        this.tong = socuoi - sodau; 
        this.ma = "KH" + String.format("%02d", cnt++); 
    }

    public int getDinhmuc() {
        if(dinhmuc.equals("A")) return 100; 
        else if(dinhmuc.equals("B")) return 500; 
        return 200; 
    }

    public long getTientrong() {
        if(tong <= getDinhmuc()){
            return tong * 450; 
        }
        return getDinhmuc() * 450; 
    }

    public long getTienngoai() {
        if(tong > getDinhmuc()) return (tong - getDinhmuc()) * 1000; 
        return 0; 
    }
    public long tongTien(){
        return getTientrong() + getTienngoai() + VAT(); 
    }
    public long VAT(){
        return (getTienngoai() * 5) / 100; 
    }
    public String getTen() {
        String [] ans = ten.trim().split("\\s+"); 
        String name = ""; 
        for(int i = 0; i < ans.length; i++){
            name += ans[i].substring(0, 1).toUpperCase() + ans[i].substring(1).toLowerCase(); 
            if(i < ans.length - 1) name += " "; 
        }
        return name; 
    }
    @Override 
    public String toString(){
        return ma + " " + getTen() + " " + getTientrong() + " " + getTienngoai()+ " " + VAT() + " " + tongTien(); 
    }
    @Override 
    public int compareTo(TienDien a){
        return this.tongTien() < a.tongTien() ? 1:-1; 
    }
}
