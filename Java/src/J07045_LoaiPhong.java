
import java.util.*; 
import java.io.*; 
class LoaiPhong implements Comparable<LoaiPhong>{
    private String line, ten; 
    
    public String getTen() {
        return ten;
    }
    public LoaiPhong(String line){
        this.line = line; 
        this.ten = line.trim().split("\\s+")[1]; 
    }
    public void setTen(String ten) {
        this.ten = ten;
    }
    @Override
    public String toString(){
        return line; 
    }
    @Override 
    public int compareTo(LoaiPhong a){
        return ten.compareTo(a.getTen()); 
    }
}
public class J07045_LoaiPhong {
    public static void main(String[] args) throws IOException {
        ArrayList<LoaiPhong> ds = new ArrayList<>();
        Scanner in = new Scanner(new File("PHONG.in"));
        int n = Integer.parseInt(in.nextLine());
        while(n-->0){
            ds.add(new LoaiPhong(in.nextLine()));
        }
        Collections.sort(ds);
        for(LoaiPhong tmp : ds){
            System.out.println(tmp);
        }
    }
}
