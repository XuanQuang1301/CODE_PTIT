import java.util.*; 
class NhanVien5007 implements Comparable<NhanVien5007> {
    private String ma, ten, gioitinh, ngaysinh, dc, mathue, ngay; 
    static int cnt =1; 
    public NhanVien5007(String ten, String gioitinh, String ngaysinh, String dc, String mathue, String ngay) {
        this.ten = ten;
        this.gioitinh = gioitinh;
        this.ngaysinh = ngaysinh;
        this.dc = dc;
        this.mathue = mathue;
        this.ngay = ngay;
        this.ma = String.format("%05d", cnt++); 
    }
    private int getYear(){
        int year = Integer.parseInt(ngaysinh.substring(6)); 
        return year; 
    }
    private int getMonth(){
        int month = Integer.parseInt(ngaysinh.substring(3, 5)); 
        return month; 
    }
    private int getDay(){
        int day = Integer.parseInt(ngaysinh.substring(0, 2)); 
        return day; 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + gioitinh + " " + ngaysinh + " " + dc + " " + mathue + " " + ngay; 
    }
    @Override 
    public int compareTo(NhanVien5007 other){
        if(this.getYear() == other.getYear()){
            if(this.getMonth() == other.getMonth()){
                return Integer.compare(this.getDay(), other.getDay()); 
            }
            return Integer.compare(this.getMonth(), other.getMonth()); 
        }
        return Integer.compare(this.getYear(), other.getYear()); 
    }
}
public class J05007_SapXepDanhSachDoiTuongNhanVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<NhanVien5007> list = new ArrayList<>(); 
        while(t-- > 0){
            list.add(new NhanVien5007(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine())); 
        }
        Collections.sort(list);
        for(NhanVien5007 i : list){
            System.out.println(i);
        }
    }
}
