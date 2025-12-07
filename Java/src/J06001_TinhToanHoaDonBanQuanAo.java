import java.util.*; 
import java.text.*; 

class Clothes{
    private String code, name; 
    private long type1, type2; 

    public Clothes(String code, String name, long type1, long type2) {
        this.code = code;
        this.name = name;
        this.type1 = type1;
        this.type2 = type2;
    }
    public long getType(String a){
        if(a.substring(2, 3).equals("1")) return type1; 
        return type2; 
    }
    public String getName() {
        return name;
    }
    public String getCode(){
        return code; 
    }
}
class Bills{
    private String code, name; 
    private long discount, total;  
    static int cnt = 1;
    public Bills(String code, long count, Clothes clother){
        this.code = code + "-" + String.format("%03d", cnt++); 
        this.name = clother.getName(); 
        long type = clother.getType(code); 
        long sum = type * count; 
        if(count >= 150){
            this.discount = sum * 50 / 100;   
        }
        else if(count >= 100){
            this.discount = sum * 30 / 100; 
        }
        else if(count >= 50) this.discount = sum * 15 / 100; 
        else this.discount = 0; 
        this.total = sum - this.discount; 
    }
    @Override 
    public String toString(){
        return code + " " + name + " " + discount + " " + total; 
    }
}
public class J06001_TinhToanHoaDonBanQuanAo{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in); 
        HashMap<String, Clothes> clothes = new HashMap<>(); 
        int n = Integer.parseInt(sc.nextLine()); 
        for(int i = 0; i < n; i++){
            Clothes tmp = new Clothes(sc.nextLine(), sc.nextLine(), Long.parseLong(sc.nextLine()), Long.parseLong(sc.nextLine())); 
            clothes.put(tmp.getCode(), tmp); 
        }
        List<Bills> list = new ArrayList<>(); 
        int t = Integer.parseInt(sc.nextLine()); 
        while(t-- > 0){
            String [] s = sc.nextLine().split("\\s+"); 
            String code = s[0]; 
            long count = Long.parseLong(s[1]); 
            list.add(new Bills(code, count, clothes.get(code.substring(0,2)))); 
        }
        for(Bills i : list){
            System.out.println(i);
        }
    }
}
