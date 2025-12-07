import java.util.*; 
import java.io.*; 
import java.text.*; 

class KhachHang7025 implements Comparable<KhachHang7025>{
    private String ma, ten = "", gioitinh; 
    private SimpleDateFormat mydate = new SimpleDateFormat("dd/MM/yyyy"); 
    private Date date; 
    private String dchi; 
    static int cnt = 1; 
    public KhachHang7025(String ten, String gioitinh, Date date, String dchi){
        this.ma = String.format("KH%03d", cnt++); 
        String tmp[] = ten.trim().split("\\s+"); 
        for(int i = 0; i < tmp.length; i++){
            this.ten += tmp[i].substring(0, 1).toUpperCase() + tmp[i].substring(1).toLowerCase() + " "; 
        }
        this.ten = this.ten.trim(); 
        this.gioitinh = gioitinh; 
        this.date = date; 
        this.dchi = dchi; 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + gioitinh + " " + dchi + " " + mydate.format(date); 
    }
    @Override
    public int compareTo(KhachHang7025 other){
        return date.compareTo(other.date);
    }
}
public class J07025_DanhSachKhachHangTrongFile {
    public static void main(String[] args)throws FileNotFoundException, Exception {
        Scanner sc = new Scanner(new File("KHACHHANG.in")); 
        List<KhachHang7025> solve = new ArrayList<>(); 
        int t = Integer.parseInt(sc.nextLine()); 
        SimpleDateFormat mydate = new SimpleDateFormat("dd/MM/yyyy"); 
        while(t-- > 0){
            solve.add(new KhachHang7025(sc.nextLine(), sc.nextLine(), mydate.parse(sc.nextLine()), sc.nextLine())); 
        }
        Collections.sort(solve);
        for(KhachHang7025 i : solve){
            System.out.println(i);
        }
    }
}
