import java.util.*; 
class DonHang53 implements Comparable<DonHang53>{
    private String name, code, typeCode, num;
    private int price, count, discount, total;
    public DonHang53(Scanner sc){
        this.name = sc.nextLine();
        this.code = sc.nextLine();
        this.typeCode = this.code.substring(4);
        this.num = this.code.substring(1, 4);
        this.price = Integer.parseInt(sc.nextLine());
        this.count = Integer.parseInt(sc.nextLine());
    }
    
    private int getDiscount(){
        if(this.typeCode.compareTo("1") == 0)
            return this.price * this.count / 2;
        return 3 * this.price * this.count / 10;
    }
    private int getTotal(){
        return (this.price * this.count) - this.getDiscount();
    }
    
    @Override
    public String toString(){
        return this.name + " " + this.code + " " + this.num + " " + this.getDiscount() + " " + this.getTotal();
    }
    @Override 
    public int compareTo(DonHang53 other){
        return this.num.compareTo(other.num);
    }
}
public class J05053_SapXepDonhang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<DonHang53> set = new ArrayList<>();
        while(t-- > 0){
            set.add(new DonHang53(sc));
        }
        Collections.sort(set);
        for(DonHang53 x : set){
            System.out.println(x);
        }
    }
}
