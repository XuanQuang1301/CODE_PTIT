import java.util.*;
import java.io.*;
public class J07011_ThongKeTuKhacNhauTrongFileVB {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc = new Scanner(new File("VANBAN.in")); 
        int n = Integer.parseInt(sc.nextLine()); 
        Map<String, Integer> mp = new HashMap<>(); 
        for(int i = 0; i < n; i++){
            String []s = sc.nextLine().toLowerCase().split("[,.;?!:\\-/\\s]+"); 
            for(String j : s){
                if(!j.isEmpty()) mp.put(j, mp.getOrDefault(j, 0) + 1); 
            }
        }
        List<Map.Entry<String, Integer>> list = new ArrayList<>(mp.entrySet()); 
        Collections.sort(list, (a, b) -> {
            if (!a.getValue().equals(b.getValue()))
                return b.getValue() - a.getValue();
            return a.getKey().compareTo(b.getKey());
        });
        for (Map.Entry<String, Integer> e : list) {
            System.out.println(e.getKey() + " " + e.getValue());
        }
    }
}
