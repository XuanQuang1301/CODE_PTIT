import java.util.*; 
class DonHang52{
    private String name, code, typeCode, num;
    private int price, count, discount, total;
    public DonHang52(Scanner sc){
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
}
public class J05052_TraCuuDonHang {
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<DonHang52> set = new ArrayList<>();
        while(t-- > 0){
            set.add(new DonHang52(sc));
        }
        for(DonHang52 x : set){
            System.out.println(x);
        }
    }
}
