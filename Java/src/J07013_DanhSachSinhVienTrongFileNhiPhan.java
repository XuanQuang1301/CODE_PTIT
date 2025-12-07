package danhsachsinhvien1;
import java.util.*; 
import java.io.*; 
import java.text.*; 
class SinhVien7013{
    private String ma, ten, lop;
    private Date ngaysinh;
    private float gpa;
    public SinhVien7013(int id, String ten, String lop, String date, float gpa) throws ParseException {
        this.ma = "B20DCCN" + String.format("%03d", id);
        this.ten = ten;
        this.lop = lop;
        this.ngaysinh = new SimpleDateFormat("dd/MM/yyyy").parse(date);
        this.gpa = gpa;
    }
    @Override
    public String toString(){
        return ma + " " +  ten + " " + lop + " " + new SimpleDateFormat("dd/MM/yyyy").format(ngaysinh) + " " + String.format("%.2f", gpa);
    }
}
public class J07013_DanhSachSinhVienTrongFileNhiPhan {
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream ob = new ObjectInputStream(new FileInputStream("SV.in"));
        ArrayList<SinhVien7013> res = (ArrayList<SinhVien7013>) ob.readObject();
        for(SinhVien7013 x: res){
            System.out.println(x);
        }
    } 
}
