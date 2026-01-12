import java.util.*; 
import java.io.*;
class SinhVien7027 {
    public String ma, ten, sdt; 

    public SinhVien7027(String ma, String ten, String sdt) {
        this.ma = ma;
        this.ten = ten;
        this.sdt = sdt;
    }
    
}
class Baitap7027{
    public String nhom, ten; 

    public Baitap7027(String nhom, String ten) {
        this.nhom = nhom;
        this.ten = ten;
    }
    
}
class Nhom7027 implements Comparable<Nhom7027>{
    public String masv, tensv, sdt, nhom, tenbt; 

    public Nhom7027(SinhVien7027 a, Baitap7027 b) {
        this.masv = a.ma; 
        this.tensv = a.ten; 
        this.sdt = a.sdt; 
        this.nhom = b.nhom; 
        this.tenbt = b.ten; 
    }
    @Override 
    public String toString(){
        return masv + " " + tensv + " " + sdt + " " + nhom + " " + tenbt; 
    }
    @Override
    public int compareTo(Nhom7027 other){
        return this.masv.compareTo(other.masv); 
    }
}
public class J07027_QuanLyBaiTapNhom {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc1 = new Scanner (new File("SINHVIEN.in"));
        Scanner sc2 = new Scanner (new File("BAITAP.in"));
        Scanner sc3 = new Scanner (new File("NHOM.in"));
        Map<String, SinhVien7027> mapSV = new HashMap<>(); 
        Map<String, Baitap7027> mapBT = new HashMap<>(); 
        List<Nhom7027> list = new ArrayList<>(); 
        int nsv = Integer.parseInt(sc1.nextLine());
        for(int i = 0; i < nsv; i++){
            String code = sc1.nextLine(); 
            String ten = sc1.nextLine(); 
            String sdt = sc1.nextLine(); 
            mapSV.put(code, new SinhVien7027(code, ten, sdt)); 
        }
        int nbt = Integer.parseInt(sc2.nextLine());
        for(int i = 0; i < nbt; i++){
            String nhom = Integer.toString(i + 1); 
            String ten = sc2.nextLine(); 
            mapBT.put(nhom, new Baitap7027(nhom, ten)); 
        }
        for(int i = 0; i < nsv; i++){
            String []s = sc3.nextLine().split("\\s+"); 
            list.add(new Nhom7027(mapSV.get(s[0]), mapBT.get(s[1]))); 
        }
        Collections.sort(list);
        for(Nhom7027 i : list){
            System.out.println(i);
        }
    }
}
