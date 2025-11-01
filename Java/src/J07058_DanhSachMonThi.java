import java.util.*; 
import java.io.*; 
class MonThi implements Comparable<MonThi> {
    private String ma, ten, hinhthuc; 

    public MonThi(String ma, String ten, String hinhthuc) {
        this.ma = ma;
        this.ten = ten;
        this.hinhthuc = hinhthuc;
    }

    public String getMa() {
        return ma;
    }
    
    @Override 
    public String toString(){
        return ma + " " + ten + " " + hinhthuc; 
    }
    @Override 
    public int compareTo(MonThi a){
        return ma.compareTo(a.getMa()); 
    }
}
public class J07058_DanhSachMonThi {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MONHOC.in")); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<MonThi> monthi = new ArrayList<>(); 
        while(t-- > 0){
            monthi.add(new MonThi(sc.nextLine(), sc.nextLine(), sc.nextLine())); 
        }
        Collections.sort(monthi); 
        for(MonThi i : monthi){
            System.out.println(i);
        }
    }
}
