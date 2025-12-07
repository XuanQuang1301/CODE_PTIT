import java.util.*; 
class BangDiem implements Comparable<BangDiem>{
    private String ma, ten, lop; 
    private float x, y, z; 

    public BangDiem(String ma, String ten, String lop, float x, float y, float z) {
        this.ma = ma;
        this.ten = ten;
        this.lop = lop;
        this.x = x;
        this.y = y;
        this.z = z;
    }
    @Override 
    public String toString(){
        return String.format("%s %s %s %.1f %.1f %.1f", ma, ten, lop, x, y, z); 
    }
    @Override 
    public int compareTo(BangDiem other){
        return ma.compareTo(other.ma); 
    }
}
public class J05030_BangDiemThanhPhan1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<BangDiem> arr = new ArrayList<>(); 
        while(t-- > 0){
            String ma = sc.nextLine(); 
            String ten = sc.nextLine(); 
            String lop = sc.nextLine(); 
            float x = Float.parseFloat(sc.nextLine()); 
            float y = Float.parseFloat(sc.nextLine());
            float z = Float.parseFloat(sc.nextLine());
            arr.add(new BangDiem(ma, ten, lop, x, y, z)); 
        }
        Collections.sort(arr);
        int j = 1; 
        for(BangDiem i : arr){
            System.out.print(j + " ");
            System.out.println(i);
        }
    }
}
