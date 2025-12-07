import java.util.*; 

public class JKT013_SoLocPhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        while(t-- > 0){
            int n = Integer.parseInt(sc.nextLine()); 
            List<String> ans = new ArrayList<>(); 
            Queue<String> q = new ArrayDeque<>(); 
            q.add("6"); q.add("8"); 
            while(true){
                String tmp = q.remove(); 
                if(tmp.length() > n) break;
                ans.add(tmp); 
                q.add(tmp + "6"); 
                q.add(tmp + "8"); 
            }
            Collections.reverse(ans);
            System.out.println(ans.size());
            for(String i : ans){
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}
