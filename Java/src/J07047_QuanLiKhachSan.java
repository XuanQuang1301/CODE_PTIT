import java.util.*; 
import java.time.*; 
import java.text.*; 
import java.io.*; 
class Room{
    private String kihieu, tenp; 
    private long dongia; 
    private double phi; 

    public Room(String kihieu, String tenp, long dongia, double phi) {
        this.kihieu = kihieu;
        this.tenp = tenp;
        this.dongia = dongia;
        this.phi = phi;
    }

    public String getKihieu() {
        return kihieu;
    }

    public String getTenp() {
        return tenp;
    }

    public long getDongia() {
        return dongia;
    }

    public double getPhi() {
        return phi;
    }
    
}
class KhachHang7047 implements Comparable<KhachHang7047> {
    private String makh, tenkh, maphong; 
    private long songayo; 
    private double tong, giamgia; 
    static int cnt = 1; 
     
    public KhachHang7047(String ten, String maphong, String start, String end, Room a)throws ParseException{
        SimpleDateFormat dtf = new SimpleDateFormat("dd/MM/yyyy");
        this.makh = String.format("KH%02d", cnt++); 
        this.tenkh = ten; 
        this.maphong = maphong; 
        Date x = dtf.parse(start); 
        Date y = dtf.parse(end); 
        this.songayo = (y.getTime() - x.getTime()) / (1000 * 60 * 60 * 24); 
        if(this.songayo == 0) this.songayo = 1; 
        
        if(this.songayo < 10){
            this.giamgia = 0; 
        }
        else if(this.songayo < 20){
            this.giamgia = 0.02; 
        }
        else if(this.songayo < 30){
            this.giamgia = 0.04; 
        }
        else if(this.songayo >= 30) this.giamgia = 0.06;
        
        this.tong = (this.songayo * a.getDongia()) * (1 + a.getPhi()); 
        this.tong *= (1 - this.giamgia); 
    }
    @Override 
    public String toString(){
        return makh + " " + tenkh + " " + maphong + " " + songayo + " " + String.format("%.2f", tong); 
    }
    @Override 
    public int compareTo(KhachHang7047 other){
        return Long.compare(other.songayo, songayo); 
    }
}
public class J07047_QuanLiKhachSan{
    public static void main(String[] args)throws ParseException, FileNotFoundException {
        Scanner sc = new Scanner (new File("DATA.in")); 
        int nkh = Integer.parseInt(sc.nextLine()); 
        Map<String, Room> mapRoom = new HashMap<>(); 
        for(int i = 0; i < nkh; i++){
            String []s = sc.nextLine().trim().split("\\s+");
            mapRoom.put(s[0], new Room(s[0], s[1], Long.parseLong(s[2]), Double.parseDouble(s[3]))); 
        }
        List<KhachHang7047> list = new ArrayList<>(); 
        int n = Integer.parseInt(sc.nextLine()); 
        for(int i = 0; i < n; i++){
            String ten = sc.nextLine(); 
            String ma = sc.nextLine(); 
            String start = sc.nextLine(); 
            String end = sc.nextLine(); 
            String tmp = ma.substring(2, 3); 
            list.add(new KhachHang7047(ten, ma, start, end, mapRoom.get(tmp))); 
        }
        Collections.sort(list);
        for(KhachHang7047 i : list){
            System.out.println(i);
        }
    }
}