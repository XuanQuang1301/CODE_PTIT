import java.util.*; 
import java.io.*; 

public class J07053_XetTuyen {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc = new Scanner(new File("XETTUYEN.in")); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<XetTuyen> xettuyen = new ArrayList<>(); 
        while(t-- > 0){
            String name = sc.nextLine(); 
            String ngaysinh = sc.nextLine(); 
            double diem1 = Double.parseDouble(sc.nextLine()); 
            double diem2 = Double.parseDouble(sc.nextLine()); 
            xettuyen.add(new XetTuyen(name, ngaysinh, diem1, diem2)); 
        }
        for(XetTuyen i : xettuyen){
            System.out.println(i);
        }
    }
}
class XetTuyen{
    private String id, ten; 
    private String ngaysinh; 
    private double diem1, diem2, diemthuong; 
    public static int cnt = 1; 
    public XetTuyen(String ten, String ngaysinh, double diem1, double diem2) {
        this.id = "PH" + String.format("%02d", cnt++); 
        this.ten = ten;
        this.ngaysinh = ngaysinh;
        this.diem1 = diem1;
        this.diem2 = diem2;
    }
    public double getDiemthuong(){
        if(diem1 >= 8 && diem2 >= 8){
            return 1; 
        }
        else if(diem1 >= 7.5 && diem2 >= 7.5){
            return 0.5; 
        }
        return 0; 
    }
    public int getTongDiem(){
        double sum = (diem1 + diem2) / 2 + getDiemthuong(); 
        if(sum >= 10) return 10; 
        return (int)Math.round(sum); 
    }
    private int getTuoi(){
        int n = ngaysinh.length(); 
        String s = ngaysinh.substring(n - 4); 
        return 2021 - Integer.parseInt(s); 
    }
    private String getTen(){
        String ans[] = ten.trim().split("\\s+"); 
        String name = ""; 
        for(int i = 0; i < ans.length; i++){
            name += ans[i].substring(0, 1).toUpperCase() + ans[i].substring(1).toLowerCase(); 
            if(i < ans.length - 1) name += " ";
        }
        return name; 
    }
    private String getStatus(){
        double sum = getTongDiem(); 
        if(sum < 5) return "Truot"; 
        else if(sum <= 6) return "Trung binh"; 
        else if(sum <= 7) return "Kha"; 
        else if(sum <= 8) return "Gioi"; 
        else return "Xuat sac"; 
    }
    @Override
    public String toString() {
        return id + " " + getTen() + " " + getTuoi() + " " + getTongDiem() + " " + getStatus(); 
    }
    
}
