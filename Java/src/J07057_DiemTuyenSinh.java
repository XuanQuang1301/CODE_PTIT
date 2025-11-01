import java.util.*; 
import java.io.*; 

public class J07057_DiemTuyenSinh {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc = new Scanner (new File("THISINH.in")); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<ThiSinh> thisinh = new ArrayList<>(); 
        while(t-- > 0){
            String ten = sc.nextLine(); 
            double diem = Double.parseDouble(sc.nextLine()); 
            String dantoc = sc.nextLine(); 
            int khuvuc = Integer.parseInt(sc.nextLine()); 
            thisinh.add(new ThiSinh(ten, diem, dantoc, khuvuc)); 
        }
        Collections.sort(thisinh);
        for(ThiSinh i : thisinh){
            System.out.println(i);
        }
    }
}
class ThiSinh implements Comparable<ThiSinh>{
    private String ma, ten, dantoc; 
    private double diem, uutien; 
    private int khuvuc; 
    private String status; 
    public static  int cnt = 1; 

    public ThiSinh(String ten, double diem, String dantoc, int khuvuc) {
        this.ten = ten;
        this.diem = diem; 
        this.dantoc = dantoc;
        this.khuvuc = khuvuc;
        this.ma = "TS" + String.format("%02d", cnt++); 
        if(!dantoc.equals("Kinh")) uutien += 1.5; 
        if(khuvuc == 1) uutien += 1.5; 
        else if(khuvuc == 2) uutien += 1; 
        this.diem = diem + uutien; 
    }
    public double sumScore(){
        return diem; 
    }
    public String getStatus(){
        if(diem >= 20.5) return "Do"; 
        return "Truot"; 
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

    public String getMa() {
        return ma;
    }
    
    @Override 
    public String toString(){
        return ma + " " + getTen() + " " + String.format("%.1f", sumScore()) + " " + getStatus(); 
    }
    @Override 
    public int compareTo(ThiSinh a){
        if(this.sumScore() == a.sumScore()){
            return ma.compareTo(a.getMa()); 
        }
        return this.sumScore() < a.sumScore() ? 1 : -1; 
    }
}