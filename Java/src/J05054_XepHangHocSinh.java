import java.util.*; 
class HocSinh5054 implements Comparable<HocSinh5054> {
    private String ma, ten, status; 
    private double diem; 
    private int stt; 
    static int cnt = 1; 
    public HocSinh5054(String ten, double diem) {
        this.ma = "HS" + String.format("%02d", cnt++); 
        this.ten = ten;
        this.diem = diem;
        if(diem < 5){
            this.status = "Yeu"; 
        }
        else if(diem < 7){
            this.status = "Trung Binh"; 
        }
        else if(diem < 9){
            this.status = "Kha"; 
        }
        else this.status = "Gioi"; 
    }
    public double getDiem(){
        return this.diem; 
    }
    public void setStt(int s){
        this.stt = s; 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + String.format("%.1f", diem) + " " + status + " " + stt; 
    }
    @Override 
    public int compareTo(HocSinh5054 other){
        return Double.compare(diem, other.diem); 
    }
}
public class J05054_XepHangHocSinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<HocSinh5054> list = new ArrayList<>(); 
        for(int i = 0; i < t; i++){
            list.add(new HocSinh5054(sc.nextLine(), Double.parseDouble(sc.nextLine()))); 
        }
        for(HocSinh5054 i : list){
            int rank = 1; 
            for(HocSinh5054 j : list){
                if(j.getDiem() > i.getDiem()){
                    rank++; 
                }
            }
            i.setStt(rank);
        }
        for(HocSinh5054 i : list){
            System.out.println(i);
        }
    }
}
