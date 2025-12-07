import java.util.*; 
class QuanAo6002 {
    private String ma, ten; 
    private long gia1, gia2; 

    public QuanAo6002(String ma, String ten, long gia1, long gia2) {
        this.ma = ma;
        this.ten = ten;
        this.gia1 = gia1;
        this.gia2 = gia2;
    }
    public long getType(String s){
        if(s.substring(2, 3).equals("1")) return gia1; 
        return gia2; 
    }
    public String getMa() {
        return ma;
    }

    public void setMa(String ma) {
        this.ma = ma;
    }

    public String getTen() {
        return ten;
    }

    public void setTen(String ten) {
        this.ten = ten;
    }

    public long getGia1() {
        return gia1;
    }

    public void setGia1(long gia1) {
        this.gia1 = gia1;
    }

    public long getGia2() {
        return gia2;
    }

    public void setGia2(long gia2) {
        this.gia2 = gia2;
    }
}
class Bill implements Comparable<Bill> {
    private String ma, ten; 
    private long discount, total; 
    static int cnt = 1; 
    public Bill(String ma, long count, QuanAo6002 other){
        this.ma = ma + "-" + String.format("%03d", cnt++); 
        this.ten = other.getTen(); 
        long type = other.getType(ma); 
        long sum = type * count; 
        if(count >= 150){
            this.discount = sum * 50 /100; 
        }else if(count >= 100) this.discount = sum * 30 / 100; 
        else if(count >= 50) this.discount = sum * 15 / 100; 
        else this.discount = 0; 
        this.total = sum - this.discount; 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + discount + " " + total; 
    }
    @Override 
    public int compareTo(Bill other){
        return Long.compare(other.total, total); 
    }
}
public class J06002_SapXepHoaDonBanQuanAo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        HashMap<String, QuanAo6002> hash = new HashMap<>(); 
        for(int i = 0; i < t; i++){
            QuanAo6002 tmp = new QuanAo6002(sc.nextLine(), sc.nextLine(), Long.parseLong(sc.nextLine()), Long.parseLong(sc.nextLine())); 
            hash.put(tmp.getMa(), tmp); 
        }
        t = Integer.parseInt(sc.nextLine()); 
        List<Bill> bill = new ArrayList<>(); 
        
        for(int i = 0; i < t; i++){
            String [] s = sc.nextLine().split("\\s+"); 
            String ma = s[0]; 
            long count = Long.parseLong(s[1]); 
            bill.add(new Bill(ma, count, hash.get(ma.substring(0, 2)))); 
        }
        Collections.sort(bill);
        for(Bill i : bill){
            System.out.println(i);
        }
    }
}
