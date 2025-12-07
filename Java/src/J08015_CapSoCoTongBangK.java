import java.util.*; 

public class J08015_CapSoCoTongBangK {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = sc.nextInt(); 
        while(t-- > 0){
            int n = sc.nextInt(); 
            Long k = sc.nextLong(); 
            Long [] a = new Long[n]; 
            for(int i = 0; i < n; i++){
                a[i] = sc.nextLong(); 
            }
            Map<Long, Long> tmp = new HashMap<>(); 
            long res = 0;
            for(Long x : a){
                Long y = k - x; 
                if(tmp.containsKey(y)){
                    res += tmp.get(y); 
                }
                tmp.put(x, tmp.getOrDefault(x, 0L) + 1); 
            }
            System.out.println(res);
        }
    }
}
