import java.util.*; 
import java.io.*; 
class MonHoc7028{
    
}
class GV7028{
    public String ma, ten; 
    private double gio; 

    public GV7028(String ma, String ten) {
        this.ma = ma;
        this.ten = ten;
    }
    public void setGio(double n){
        this.gio += n; 
    }
    @Override
    public String toString(){
        return ten + " " + String.format("%.2f", gio); 
    }
}
public class J07028_TinhGioChuan {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc1 = new Scanner(new File("GIANGVIEN.in")); 
        int t = Integer.parseInt(sc1.nextLine()); 
        List<GV7028> list = new ArrayList<>(); 
        while(t-- > 0){
            String s[] = sc1.nextLine().split("\\s+");
            String tmp = ""; 
            for(int j = 1; j < s.length; j++){
                tmp += s[j]; 
                if(j < s.length - 1) tmp += " ";
            }
            list.add(new GV7028(s[0], tmp)); 
        }
        Scanner sc2 = new Scanner (new File("GIOCHUAN.in")); 
        int n = Integer.parseInt(sc2.nextLine()); 
        while(n-- > 0){
            String []s = sc2.nextLine().split("\\s+"); 
            double gio = Double.parseDouble(s[2]); 
            for(GV7028 i : list){
                if(i.ma.equals(s[0])){
                    i.setGio(gio);
                }
            }
        }
        for(GV7028 i : list){
            System.out.println(i);
        }
    }
}
