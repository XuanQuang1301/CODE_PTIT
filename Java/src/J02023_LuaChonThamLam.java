import java.util.*;

public class J02023_LuaChonThamLam {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int S = sc.nextInt();

        if(S == 0 && N > 1 || S > N * 9){
            System.out.println("-1 -1");
            return ; 
        }
        StringBuilder maxAns = new StringBuilder(); 
        int sum = S; 
        for(int i = 0; i < N; i++){
            int tmp = Math.min(9, sum); 
            maxAns.append(tmp); 
            sum -= tmp; 
        }
        int [] arr = new int[N]; 
        sum = S; 
        for(int i = 0; i < N; i++){
            int tmp = Math.max(0, sum - 9 * (N - i - 1)); 
            if(i == 0 && tmp == 0 && sum > 0) tmp = 1; 
            arr[i] = tmp; 
            sum -= tmp; 
        }
        StringBuilder minAns = new StringBuilder(); 
        for(int i : arr) minAns.append(i); 
        System.out.println(minAns + " " + maxAns);
    }
}
