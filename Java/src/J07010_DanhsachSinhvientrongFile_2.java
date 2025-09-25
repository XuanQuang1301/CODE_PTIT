import java.util.*;
import java.io.*;
import java.text.*;
class SV {
    private String ma, ten, lop, date;
    private double gpa;
    public static int NUM_STUDENT = 1;
    public SV(String ten, String lop, String date, double gpa)throws ParseException{
        this.ma = "B20DCCN" + String.format("%03d", NUM_STUDENT++);
        this.ten = ten;
        this.lop = lop;
        this.date = date;
        this.gpa = gpa;
        SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");
        this.date = formatter.format(formatter.parse(date));
    }
    @Override
    public String toString(){
        return ma + " " + ten + " " + lop + " " + date + " " + String.format("%.2f", gpa);
    }
}
public class J07010_DanhsachSinhvientrongFile_2 {
    public static void main(String[] args)throws FileNotFoundException, ParseException{
        Scanner sc = new Scanner(new File("SV.in"));
        int n = Integer.parseInt(sc.nextLine());
        for(int i = 0; i < n; i++){
            String ten = sc.nextLine();
            String lop = sc.nextLine();
            String m = sc.nextLine();
            float g = Float.parseFloat(sc.nextLine());
            SV stu = new SV(ten, lop, m, g);
            System.out.println(stu);
        }
    }
}
