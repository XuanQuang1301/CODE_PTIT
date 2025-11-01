import java.util.*; 
import java.io.*; 

public class J07073_DangKyHinhThucGiangDay {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("MONHOC.in")); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<GiangDay> list = new ArrayList<>(); 
        while(t-- > 0){
            String ma = sc.nextLine(); 
            String ten = sc.nextLine(); 
            int n = Integer.parseInt(sc.nextLine()); 
            String off  = sc.nextLine(); 
            String onl = sc.nextLine(); 
            if(!onl.equals("Truc tiep")){
               list.add(new GiangDay(ma, ten, n, off, onl)); 
            }
        }
        Collections.sort(list);
        for(GiangDay i : list){
            System.out.println(i);
        }
    }
}
class GiangDay implements Comparable<GiangDay> {
    private String ma, ten; 
    private int tin; 
    private String off, onl; 

    public GiangDay(String ma, String ten, int tin, String off, String onl) {
        this.ma = ma;
        this.ten = ten;
        this.tin = tin;
        this.off = off;
        this.onl = onl;
    }
    public String getMa(){
        return ma; 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + tin + " " + off + " " + onl; 
    }
    @Override 
    public int compareTo(GiangDay a){
        return ma.compareTo(a.getMa()); 
    }
}
