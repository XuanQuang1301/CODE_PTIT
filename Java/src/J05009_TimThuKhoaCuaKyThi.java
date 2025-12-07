import java.util.*; 
class ThiSinh5009{
    private String ma, ten, ngay; 
    private float x, y, z, sum; 
    static int cnt = 1; 

    public ThiSinh5009(String ten, String ngay, float x, float y, float z) {
        this.ten = ten;
        this.ngay = ngay;
        this.x = x;
        this.y = y;
        this.z = z;
        this.ma = String.format("%01d", cnt++);
        sum = x + y + z; 
    }
    public float getSum(){
        return sum; 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + ngay + " " + String.format("%.1f", sum); 
    }
}
public class J05009_TimThuKhoaCuaKyThi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        List<ThiSinh5009> arr = new ArrayList<>(); 
        int t = Integer.parseInt(sc.nextLine()); 
        float maxSum = 0; 
        for(int i = 0; i < t; i++){
            arr.add(new ThiSinh5009(sc.nextLine(), sc.nextLine(), Float.parseFloat(sc.nextLine()), Float.parseFloat(sc.nextLine()), Float.parseFloat(sc.nextLine()))); 
        }
        for(ThiSinh5009 i : arr){
            maxSum = Math.max(maxSum, i.getSum()); 
        }
        for(ThiSinh5009 i : arr){
            if(i.getSum() == maxSum){
                System.out.println(i);
            }
        }
    }
}
