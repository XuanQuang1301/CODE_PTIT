import java.util.*; 

class XetTuyen{
    private String ma, ten, status; 
    private int tuoi; 
    private double x, y, thuong, tb; 
    static int cnt = 1; 
    public XetTuyen(String ten, String nam, double x, double y){
        this.ma = String.format("PH%02d", cnt++); 
        this.ten = ten; 
        nam = nam.split("/")[2]; 
        this.tuoi = 2021 - Integer.parseInt(nam); 
        double tmp = Math.min(x, y); 
        if(tmp >= 8) this.thuong = 1; 
        else if(tmp >= 7.5) this.thuong = 0.5; 
        else this.thuong = 0; 
        this.tb = Math.round((x + y)/ 2 + this.thuong);
        if(this.tb > 10) this.tb = 10; 
        if(this.tb < 5) this.status = "Truot"; 
        else if(this.tb <= 6) this.status = "Trung binh"; 
        else if(this.tb <= 7) this.status = "Kha"; 
        else if(this.tb <= 8) this.status = "Gioi"; 
        else this.status = "Xuat sac"; 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + tuoi + " " + (long)tb + " " + status; 
    }
}
public class J05060_KetQuaXetTuyen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<XetTuyen> list = new ArrayList<>();
        while(t-- > 0){
            list.add(new XetTuyen(sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()))); 
        }
        for(XetTuyen i : list){
            System.out.println(i);
        }
    }
}