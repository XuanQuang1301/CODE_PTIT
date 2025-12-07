import java.util.*; 

public class J08012_HinhSao {
    static int n; 
    static ArrayList<Integer>[] solve;
    static boolean iSCheck(){
        for(int i = 1;i <= n;i++){
            if(solve[i].size() == n - 1) return true;
        }
        return false;
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        solve = new ArrayList[n + 1];
        for(int i = 1;i <= n;i++){
            solve[i] = new ArrayList<>();
        }
        for(int i = 1;i < n;i++)
        {
            int x = sc.nextInt(), y = sc.nextInt();
            solve[x].add(y);
            solve[y].add(x);
        }
        if(iSCheck()){
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        }
    }
}
