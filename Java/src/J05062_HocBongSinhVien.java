import java.util.*; 
class HocBong {
    private String ten, hb; 
    private double gpa; 
    private int drl; 

    public HocBong(String ten, double gpa, int drl) {
        this.ten = ten;
        this.gpa = gpa;
        this.drl = drl; 
    }
    public double getGpa() {
        return gpa;
    }

    public int getDrl() {
        return drl;
    }
    
    public void setHb(String hb) {
        this.hb = hb;
    }
    @Override
    public String toString(){
        return ten + ": " + hb; 
    }
}
public class J05062_HocBongSinhVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        String s1[] = sc.nextLine().split("\\s+"); 
        int n = Integer.parseInt(s1[0]); 
        int m = Integer.parseInt(s1[1]); 
        List<HocBong> list = new ArrayList<>(); 
        double []tmp = new double[n]; 
        for(int i = 0; i < n; i++){
            String name = sc.nextLine(); 
            String s[] = sc.nextLine().split("\\s+"); 
            double gpa = Double.parseDouble(s[0]); 
            int drl = Integer.parseInt(s[1]); 
            list.add(new HocBong(name, gpa, drl)); 
            tmp[i] = gpa; 
        }
        Arrays.sort(tmp);
        double diemchuan = 0; 
        for(int i = tmp.length - 1; i >= 0; i--){
            m--; 
            if(m == 0){
                diemchuan = tmp[i]; 
            }
        }
        for(HocBong i : list){
            String hb = ""; 
            if(i.getGpa() >= diemchuan){
                if(i.getGpa() >= 3.6 && i.getDrl() >= 90) hb = "XUATSAC"; 
                else if(i.getGpa() >= 3.2 && i.getDrl() >= 80) hb = "GIOI"; 
                else if(i.getGpa() >= 2.5 && i.getDrl() >= 70) hb = "KHA";
                else hb = "KHONG"; 
            }
            else hb = "KHONG"; 
            i.setHb(hb);
            System.out.println(i);
        }
    }
}
