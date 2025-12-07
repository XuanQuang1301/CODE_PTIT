import java.util.*; 
class DoanhNghiep5028 implements Comparable<DoanhNghiep5028> {
    private String ma, ten; 
    private Long sl; 

    public DoanhNghiep5028(String ma, String ten, Long sl) {
        this.ma = ma;
        this.ten = ten;
        this.sl = sl;
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + sl; 
    }
    @Override 
    public int compareTo(DoanhNghiep5028 other){
        int cmp = other.sl.compareTo(this.sl); // giảm dần theo sl
        if(cmp == 0) return this.ma.compareTo(other.ma); // tăng dần theo mã
        return cmp;
    }
}
public class J05028_DanhSachDoanhNghiepNhanSinhVienThucTap1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in); 
        int n = Integer.parseInt(sc.nextLine()); 
        List<DoanhNghiep5028> list = new ArrayList<>(); 
        for(int i = 0; i < n; i++){
            list.add(new DoanhNghiep5028(sc.nextLine(), sc.nextLine(), Long.parseLong(sc.nextLine()))); 
        }
        Collections.sort(list);
        for(DoanhNghiep5028 i : list){
            System.out.println(i);
        }
    }
}
