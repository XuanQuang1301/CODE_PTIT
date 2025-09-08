
import java.util.Scanner;
class HS{
    private String hoten, lop, ngaysinh;
    private double gpa;
    public HS(){
        hoten = ""; lop = ""; ngaysinh = "";
        gpa = 0.0;
    }
    static Scanner sc = new Scanner(System.in);
    public HS(String hoten, String lop, String ngaysinh, double gpa){
        this.hoten = hoten;
        this.lop = lop;
        this.ngaysinh = ngaysinh;
        this.gpa = gpa;
    }
    void Output(){
        System.out.print("B20DCCN001 ");

        System.out.printf("%s %s %s %.2f", hoten, lop, ngaysinh, gpa);
    }
    void Intput(){
        hoten = sc.nextLine();
        lop = sc.next();
        ngaysinh = sc.next();
        gpa = sc.nextDouble();
        if(ngaysinh.charAt(2) != '/'){
            ngaysinh = "0" + ngaysinh;
        }
        if(ngaysinh.charAt(5) != '/'){
            ngaysinh = ngaysinh.substring(0, 3) + "0" + ngaysinh.substring(3);
        }
    }
}
public class J04006 {
    public static void main(String [] args){
        HS a = new HS();
        a.Intput();
        a.Output();
    }
}
