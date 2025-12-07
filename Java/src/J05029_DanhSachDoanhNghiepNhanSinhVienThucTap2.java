import java.util.*; 
class DoanhNghiep5029 implements Comparable<DoanhNghiep5029>{
    private String ma, ten; 
    private Long sl; 

    public DoanhNghiep5029(String ma, String ten, Long sl) {
        this.ma = ma;
        this.ten = ten;
        this.sl = sl;
    }

    public Long getSl() {
        return sl;
    }
    
    @Override 
    public String toString(){
        return ma + " " + ten + " " + sl;
    }
    @Override 
    public int compareTo(DoanhNghiep5029 other){
        int cmp = other.sl.compareTo(this.sl);
        if(cmp == 0) return this.ma.compareTo(other.ma); 
        return cmp; 
    }
}
public class J05029_DanhSachDoanhNghiepNhanSinhVienThucTap2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int n = Integer.parseInt(sc.nextLine()); 
        List<DoanhNghiep5029> list = new ArrayList<>(); 
        for(int i = 0; i < n; i++){
            list.add(new DoanhNghiep5029(sc.nextLine(), sc.nextLine(), Long.parseLong(sc.nextLine()))); 
        }
        Collections.sort(list);
        int t = Integer.parseInt(sc.nextLine()); 
        while(t-- > 0){
            //String s = sc.nextLine(); 
            Long x = sc.nextLong();  
            Long y = sc.nextLong();  
            System.out.printf("DANH SACH DOANH NGHIEP NHAN TU %d DEN %d SINH VIEN:\n", x, y);
            for(DoanhNghiep5029 i : list){
                if(i.getSl() >= x && i.getSl() <= y){
                    System.out.println(i);
                }
            }
        }
    }
}
