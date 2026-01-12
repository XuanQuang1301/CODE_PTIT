import java.util.*; 
import java.io.*; 
class ThiSinh5055 implements Comparable<ThiSinh5055> {
    String ma, ten, ngaysinh; 
    private int thucte, uutien, xephang; 
    static int cnt = 1; 
    public ThiSinh5055(String ten, String ngaysinh, String start, String end){
        this.ten = ten; 
        this.ma = String.format("VDV%02d", cnt++); 
        this.ngaysinh = ngaysinh; 
        int namsinh = Integer.parseInt(ngaysinh.split("/")[2]); 
        int tuoi = 2021 - namsinh;
        if(tuoi < 18){
            uutien = 0; 
        }
        else if(tuoi < 25) uutien = 1; 
        else if(tuoi < 32) uutien = 2; 
        else uutien = 3; 
        this.thucte = toSecond(end) - toSecond(start); 
    }
    private int toSecond(String time){
        String []s = time.split(":"); 
        return Integer.parseInt(s[0]) * 3600 + Integer.parseInt(s[1]) * 60 + Integer.parseInt(s[2]); 
    }
    public int getThanhTichXepHang(){
        return thucte - uutien; 
    }
    public void setXepHang(int n){
        this.xephang = n; 
    }
    private String format(int s){
        int h = s / 3600; 
        int m = (s % 3600) / 60; 
        int ss = s % 60; 
        return String.format("%02d:%02d:%02d", h, m, ss); 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + format(thucte) + " " + format(uutien) + " " + format(getThanhTichXepHang()) + " " + xephang; 
    }
    @Override 
    public int compareTo(ThiSinh5055 other){
        return Integer.compare(getThanhTichXepHang(), other.getThanhTichXepHang()); 
    }
}
public class J05055_XepHangVanDongVien1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in); 
        int n = Integer.parseInt(sc.nextLine()); 
        List<ThiSinh5055> list = new ArrayList<>(); 
        for(int i = 0; i < n; i++){
            list.add(new ThiSinh5055(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine())); 
        }
        for(ThiSinh5055 i : list){
            int rank = 1; 
            for(ThiSinh5055 j : list){
                if(j.getThanhTichXepHang() < i.getThanhTichXepHang()){
                    rank++; 
                }
            }
            i.setXepHang(rank);
        }
        Collections.sort(list);
        for(ThiSinh5055 i : list){
            System.out.println(i);
        }
    }
}
