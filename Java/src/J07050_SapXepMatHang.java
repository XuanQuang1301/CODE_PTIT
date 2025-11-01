import java.util.*; 
import java.io.*; 
class MH implements Comparable<MH> {
    private String id, ten, nhom; 
    private Float giaban, giamua, loinhuan; 
    public static int cnt = 1; 
    public MH(String ten, String nhom, Float giamua, Float giaban) {
        this.id = "MH" + String.format("%02d", cnt++);
        this.ten = ten;
        this.nhom = nhom;
        this.giaban = giaban;
        this.giamua = giamua;
        this.loinhuan = giaban - giamua;
    }

    public Float getLoinhuan() {
        return loinhuan;
    }
    
    @Override 
    public String toString(){
        return id + " " + ten + " " + nhom + " " + String.format("%.2f", loinhuan); 
    }
    @Override 
    public int compareTo(MH a){
        return -loinhuan.compareTo(a.getLoinhuan()); 
    }
}
public class J07050_SapXepMatHang {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MATHANG.in")); 
        int n = Integer.parseInt(sc.nextLine()); 
        MH [] mh = new MH[n]; 
        for(int i = 0; i < n; i++){
            String ten = sc.nextLine(); 
            String nhom = sc.nextLine(); 
            Float giamua = Float.parseFloat(sc.nextLine()); 
            Float giaban = Float.parseFloat(sc.nextLine()); 
            mh[i] = new MH(ten, nhom, giamua, giaban); 
        }
        Arrays.sort(mh); 
        for(MH i : mh){
            System.out.println(i);
        }
    }
}
