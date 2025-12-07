import java.util.*; 
class SinhVien implements Comparable<SinhVien>{
    private int stt; 
    private String ma, ten, lop, email, dn; 
    static int cnt = 1; 
    public SinhVien(String ma, String ten, String lop, String email, String dn) {
        this.stt = cnt++; 
        this.ma = ma;
        this.ten = ten;
        this.lop = lop;
        this.email = email;
        this.dn = dn;
    }

    public String getDn() {
        return dn;
    }
    @Override 
    public String toString(){
        return stt + " " + ma + " " + ten + " " + lop + " " + email + " " + dn; 
    }
    @Override 
    public int compareTo(SinhVien other){
        return ten.compareTo(other.ten); 
    }
}
public class J05034_DanhSachThucTap1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<SinhVien> list = new ArrayList<>(); 
        while(t-- > 0){
            list.add(new SinhVien(sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLine())); 
        }
        Collections.sort(list);
        int q = Integer.parseInt(sc.nextLine()); 
        while(q-- > 0){
            String check = sc.nextLine().trim(); 
            for(SinhVien i : list){
                if(i.getDn().equals(check)){
                    System.out.println(i);
                }
            }
        }
    }
}
