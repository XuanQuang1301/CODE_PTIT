import java.util.*; 

public class J05065_LietKeNhanVienTheoNhom {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int n = Integer.parseInt(sc.nextLine()); 
        ArrayList<NhanVien5065> solve = new ArrayList<>(); 
        for(int i = 0; i < n; i++){
            String s = sc.nextLine(); 
            String ma = s.substring(0, 8); 
            String name = s.substring(8); 
            solve.add(new NhanVien5065(ma, name)); 
        }
        Collections.sort(solve);
        int t = Integer.parseInt(sc.nextLine()); 
        while(t-- > 0){
            String check = sc.nextLine(); 
            for(NhanVien5065 x : solve){
                if(x.getChucvu().equals(check)){
                    System.out.println(x);
                }
            }
            System.out.println();
        }
    }
}
class NhanVien5065 implements Comparable<NhanVien5065> {
    private String ma, ten, chucvu, hesoLuong, sohieu; 
    static int gd = 0, tp = 0, pp = 0; 
    public NhanVien5065(String ma, String ten) {
        this.ma = ma;
        this.ten = ten;
        this.hesoLuong = (ma.substring(2, 4));
        this.sohieu = (ma.substring(4, 7)); 
        String tmp = ma.substring(0, 2); 
        if(tmp.equals("GD")){
            if(gd < 1){
                gd++; 
                this.chucvu = tmp; 
            }
            else this.chucvu = "NV"; 
        }
        else if(tmp.equals("TP")){
            if(tp < 3){
                tp++; 
                this.chucvu = tmp;
            }
            else{
                this.chucvu = "NV"; 
            }
        }else if(tmp.equals("PP")){
            if(pp < 3){
                pp++; 
                this.chucvu = tmp;
            }
            else this.chucvu = "NV"; 
        }else{
            this.chucvu = tmp;
        }
    }

    public String getChucvu() {
        return chucvu;
    }
    
    @Override 
    public String toString(){
        return ten + " " + chucvu + " " + sohieu + " " + hesoLuong; 
    }
    @Override 
    public int compareTo(NhanVien5065 other){
        int x = Integer.parseInt(other.hesoLuong) - Integer.parseInt(this.hesoLuong); 
        if(x != 0) return x; 
        return Integer.parseInt(this.sohieu) - Integer.parseInt(other.sohieu); 
    }
}
