import java.util.*; 
class SinhVien53 implements Comparable<SinhVien53>{
    private int stt; 
    private String ma, ten, lop, email, dn; 
    static int cnt = 1; 
    public SinhVien53(String ma, String ten, String lop, String email, String dn) {
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

    public String getMa() {
        return ma;
    }
    @Override 
    public String toString(){
        return stt + " " + ma + " " + ten + " " + lop + " " + email + " " + dn; 
    }
    @Override 
    public int compareTo(SinhVien53 other){
        return ma.compareTo(other.getMa()); 
    }
}
public class J05035_DachSachThucTap2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<SinhVien53> list = new ArrayList<>(); 
        while(t-- > 0){
            list.add(new SinhVien53(sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLine())); 
        }
        Collections.sort(list);
        int q = Integer.parseInt(sc.nextLine()); 
        while(q-- > 0){
            String check = sc.nextLine().trim(); 
            for(SinhVien53 i : list){
                if(i.getDn().equals(check)){
                    System.out.println(i);
                }
            }
        }
    }
}
