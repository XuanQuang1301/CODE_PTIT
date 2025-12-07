import java.util.*; 

public class J08024_So0VaSo9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        while(t-- > 0){
            Queue<Integer> q = new ArrayDeque<>(); 
            int n = Integer.parseInt(sc.nextLine()); 
            q.add(9); 
            while(true){
                Integer tmp = q.remove(); 
                if(tmp % n == 0){
                    System.out.println(tmp);
                    break; 
                }
                q.add(tmp * 10 + 0); 
                q.add(tmp * 10 + 9); 
            }
        }
        
    }
}
