import java.util.*; 
import java.io.*; 

public class J07055_XepLoai {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc = new Scanner(new File("BANGDIEM.in")); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<LapTrinh> laptrinh = new ArrayList<>(); 
        while(t-- > 0){
            String name = sc.nextLine(); 
            double x = Double.parseDouble(sc.nextLine()); 
            double y = Double.parseDouble(sc.nextLine()); 
            double z = Double.parseDouble(sc.nextLine()); 
            laptrinh.add(new LapTrinh(name, x, y, z)); 
        }
        Collections.sort(laptrinh);
        for(LapTrinh i : laptrinh){
            System.out.println(i);
        }
    }
}
class LapTrinh implements Comparable<LapTrinh> {
    private String id, ten; 
    private double x, y, z; 
    private String status; 
    public static int cnt = 1; 
    public LapTrinh(String ten, double x, double y, double z) {
        this.id = "SV" + String.format("%02d", cnt++); 
        this.ten = ten;
        this.x = x;
        this.y = y;
        this.z = z;
    }
    public double getTong(){
        return x * 0.25 + y * 0.35 + z * 0.4; 
    }

    public String getStatus() {
        if(getTong() >= 8) return "GIOI"; 
        else if(getTong() >= 6.5) return "KHA"; 
        else if(getTong() >= 5) return "TRUNG BINH"; 
        else return "KEM"; 
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
        return id + " " + getTen() + " " + String.format("%.2f", getTong()) + " " + getStatus(); 
    }
    @Override
    public int compareTo(LapTrinh a){
        return this.getTong() < a.getTong() ? 1 : -1; 
    }
}