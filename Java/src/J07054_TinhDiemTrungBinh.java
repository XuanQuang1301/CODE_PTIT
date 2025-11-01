import java.util.*; 
import java.io.*; 

public class J07054_TinhDiemTrungBinh {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc = new Scanner(new File("BANGDIEM.in")); 
        List<BangDiem> bangdiem = new ArrayList<>(); 
        int t = Integer.parseInt(sc.nextLine()); 
        while(t-- > 0){
            String ten = sc.nextLine(); 
            double diem1 = Double.parseDouble(sc.nextLine()); 
            double diem2 = Double.parseDouble(sc.nextLine()); 
            double diem3 = Double.parseDouble(sc.nextLine()); 
            bangdiem.add(new BangDiem(ten, diem1, diem2, diem3)); 
        }
        Collections.sort(bangdiem);
        int rank = 1;
        bangdiem.get(0).setRank(rank);
        for(int i = 1; i < bangdiem.size(); i++){
            if(bangdiem.get(i).getTB() == bangdiem.get(i - 1).getTB()){
                bangdiem.get(i).setRank(rank);
            }
            else{
                rank = i + 1; 
                bangdiem.get(i).setRank(rank);
            }
        }
        for(BangDiem i : bangdiem){
            System.out.println(i);
        }
    }
}
class BangDiem implements Comparable<BangDiem> {
    private String id, ten; 
    private double diem1, diem2, diem3; 
    private int rank; 
    public static int cnt = 1; 
    public BangDiem(String ten, double diem1, double diem2, double diem3) {
        this.id = "SV" + String.format("%02d", cnt++); 
        this.ten = ten;
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
    }
    public double getTB(){
        return ((diem1 + diem2) * 3 + (diem3 * 2)) / 8; 
    }

    public int getRank() {
        return rank;
    }

    public void setRank(int rank) {
        this.rank = rank;
    }

    public String getId() {
        return id;
    }
    
    private String getName(){
        String ans[] = ten.trim().split("\\s+"); 
        String name = ""; 
        for(int i = 0; i < ans.length; i++){
            name += ans[i].substring(0, 1).toUpperCase() + ans[i].substring(1).toLowerCase(); 
            if(i < ans.length - 1) name += " ";
        }
        return name; 
    }
    @Override
    public String toString(){
        return id + " " + getName() + " " + String.format("%.2f", getTB()) + " " + getRank(); 
    }
    @Override
    public int compareTo(BangDiem a){
        if(this.getTB() == a.getTB()){
            return id.compareTo(a.getId()); 
        }
        return this.getTB() < a.getTB() ? 1 : -1; 
    }
}