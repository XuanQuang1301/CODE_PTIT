import java.util.*; 
import java.time.*; 

class TinhThanh{
    private String ma, ten; 
    private Float gia; 

    public TinhThanh(String ma, String ten, Float gia) {
        this.ma = ma;
        this.ten = ten;
        this.gia = gia;
    }

    public String getMa() {
        return ma;
    }

    public String getTen() {
        return ten;
    }

    public Float getGia() {
        return gia;
    }
    
}
public class J05071_TinhCuocDienThoaiCoDinh1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int n = Integer.parseInt(sc.nextLine()); 
        List<TinhThanh> list = new ArrayList<>(); 
        for(int i = 0; i < n; i++){
            String ma = sc.nextLine(); 
            String ten = sc.nextLine(); 
            Float gia = Float.parseFloat(sc.nextLine()); 
            list.add(new TinhThanh(ma, ten, gia)); 
        }
        int t = Integer.parseInt(sc.nextLine()); 
        while(t-- > 0){
            String []s = sc.nextLine().split("\\s+");
            String sdt = s[0]; 
            int giostart = Integer.parseInt(s[1].substring(0, 2));
            int phutstart = Integer.parseInt(s[1].substring(3));
            LocalTime start = LocalTime.of(giostart, phutstart); 
            
            int gioend = Integer.parseInt(s[2].substring(0, 2)); 
            int phutend = Integer.parseInt(s[2].substring(3)); 
            LocalTime end = LocalTime.of(gioend, phutend); 
            long minutes = Duration.between(start, end).toMinutes(); 
            
            if(sdt.substring(0, 1).equals("0")){
                String matinh = sdt.substring(1, 3); 
                for(TinhThanh i : list){
                    if(matinh.equals(i.getMa())){
                        long tongtien = Math.round(minutes * i.getGia());
                        System.out.println(sdt + " " + i.getTen() + " " + minutes + " " + tongtien);
                    }
                }
            }
            else{
                long blok = (long)Math.ceil(minutes / 3.0); 
                long tongtien = blok * 800; 
                System.out.println(sdt + " " + "Noi mang" + " " + blok + " " + (tongtien));
            }
        }
    }
}
