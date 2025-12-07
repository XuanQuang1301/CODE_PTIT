import java.util.*; 
import java.time.LocalTime; 
import java.time.Duration;
class TinhGio implements Comparable<TinhGio>{
    private String ma, ten; 
    private long gio, phut; 
    public TinhGio(String ma, String ten, String giovao, String giora){
        this.ma = ma; 
        this.ten = ten; 
        LocalTime start = LocalTime.parse(giovao); 
        LocalTime end = LocalTime.parse(giora); 
        Duration duration = Duration.between(start, end); 
        this.gio = duration.toHours(); 
        this.phut = duration.toMinutes() % 60; 
    }
    @Override 
    public String toString(){
        return ma + " " + ten + " " + gio + " gio " + phut + " phut"; 
    }
    @Override 
    public int compareTo(TinhGio other){
        if(other.gio == this.gio){
            return Long.compare(other.phut, this.phut); 
        }
        return Long.compare(other.gio, this.gio); 
    }
}
public class J05011_TinhGio {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        List<TinhGio> arr = new ArrayList<>(); 
        int t = Integer.parseInt(sc.nextLine()); 
        while(t-- > 0){ 
            arr.add(new TinhGio(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine())); 
        }
        Collections.sort(arr);
        for(TinhGio i : arr){
            System.out.println(i);
        }
    }
}
