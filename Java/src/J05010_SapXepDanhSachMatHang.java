import java.util.*; 

class MatHang5010 implements Comparable<MatHang5010>{
    private String ten, nhom; 
    private Float giamua, giaban, loinhuan; 
    private int stt; 
    static int cnt = 1; 

    public MatHang5010(String ten, String nhom, Float giamua, Float giaban) {
        this.ten = ten;
        this.nhom = nhom;
        this.giamua = giamua;
        this.giaban = giaban;
        this.stt = cnt++; 
        this.loinhuan = this.giaban - this.giamua;          
    }
    @Override 
    public String toString(){
        return stt + " " + ten + " " + nhom + " " + String.format("%.2f", loinhuan); 
    }
    @Override 
    public int compareTo(MatHang5010 other){
        return Float.compare(other.loinhuan, loinhuan); 
    }
}
public class J05010_SapXepDanhSachMatHang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        List<MatHang5010> list = new ArrayList<>(); 
        int t = Integer.parseInt(sc.nextLine()); 
        while(t-- > 0){ 
            list.add(new MatHang5010(sc.nextLine(), sc.nextLine(), Float.parseFloat(sc.nextLine()), Float.parseFloat(sc.nextLine()))); 
        }
        Collections.sort(list);
        for(MatHang5010 i : list){
            System.out.println(i);
        }
    }
}
