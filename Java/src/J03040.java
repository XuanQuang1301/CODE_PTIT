import java.util.Scanner;

class SinhVien{
    //thuoc tinh
    private String maSV; // B + 2 so 3 so
    private String hoVaDem, ten;
    private int tuoi;
    private boolean gioiTinh;
    private double diem1, diem2;
    public SinhVien(){
        this.maSV  = "";
        this.hoVaDem = "";
        this.ten = "";
        this.tuoi = 0;
        this.gioiTinh = true;
        this.diem1 = 0;
        this.diem2 = 0;
    }
    public void setDiem(double diem1, double diem2){
        this.diem1 = diem1;
        this.diem2 = diem2;
    }
    public double getGPA(){
        return (diem1 + diem2) * 2 / 3.0;
    }
    public String getXepLoai(){
        double gpa = getGPA();
        if(gpa < 5) return "yeu";
        else if(gpa < 6.5) return "trung binh";
        else if(gpa < 8) return "kha";
        else if(gpa < 9) return "gioi";
        else return "xuat sac";
    }
    public void setMaSV(int number){
        this.maSV = "D23DCCN" + String.format("%03d", number);
    }
    public String getHoVaten(){
        return hoVaDem + " " + ten;
    }
    //methods
    public void input(){
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        setMaSV(number);
        sc.nextLine();
        hoVaDem = sc.nextLine();
        ten = sc.nextLine();
        tuoi = sc.nextInt();
        while(tuoi < 18 || tuoi > 23){
            System.out.println("nhap sai");
            tuoi = sc.nextInt();
        }
        gioiTinh = sc.nextBoolean();
        diem1 = sc.nextDouble();
        while(diem1 < 0 || diem1 > 10){
            System.out.println("nhap sai");
            diem1 = sc.nextDouble();
        }
        diem2 = sc.nextDouble();
        while(diem2 < 0 || diem2 > 10){
            System.out.println("nhap sai");
            diem2 = sc.nextDouble();
        }
    }
    public void out(){
        System.out.printf("%s %s %s %d %s %.1f %s\n", maSV, hoVaDem, ten, tuoi,(gioiTinh ? "nam" : "nu"), getGPA(), getXepLoai());
        
    }
}
public class J03040 {
    public static void main(String [] args){
        SinhVien s= new SinhVien();
        s.input();
        s.setDiem(4, 8);
        s.out();
        System.out.println(s.getHoVaten() + " " + s.getXepLoai());
    }
}