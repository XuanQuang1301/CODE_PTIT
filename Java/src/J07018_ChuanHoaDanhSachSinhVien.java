import java.util.*; 
import java.io.*; 
import java.text.*; 
class SinhVien7018{
    private String ma, ten = "", lop; 
    private double diem; 
    private SimpleDateFormat mydate = new SimpleDateFormat("dd/MM/yyyy"); 
    private Date date; 
    static int cnt = 1;     
    public SinhVien7018(String name, String lop, Date date, double diem){
        this.ma = String.format("B20DCCN%03d", cnt++); 
        String tmp[] = name.trim().split("\\s+"); 
        for(int i = 0; i < tmp.length; i++){
            this.ten += tmp[i].substring(0, 1).toUpperCase() + tmp[i].substring(1).toLowerCase() + " "; 
        }
        this.ten = this.ten.trim(); 
        this.lop = lop; 
        this.date = date; 
        this.diem = diem; 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + lop + " " + mydate.format(date) + " " + String.format("%.2f", diem); 
    }
}
public class J07018_ChuanHoaDanhSachSinhVien {
    public static void main(String[] args)throws FileNotFoundException, Exception {
        Scanner sc = new Scanner(new File("SINHVIEN.in")); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<SinhVien7018> arr = new ArrayList<>();
        SimpleDateFormat mydate = new SimpleDateFormat("dd/MM/yyyy"); 
        for(int i = 0; i < t; i++){
            arr.add(new SinhVien7018(sc.nextLine(), sc.nextLine(), mydate.parse(sc.nextLine()), Double.parseDouble(sc.nextLine()))); 
        }
        for(SinhVien7018 i : arr){
            System.out.println(i);
        }
    }
}
