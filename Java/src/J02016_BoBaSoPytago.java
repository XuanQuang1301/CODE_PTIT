import java.util.*; 

public class J02016_BoBaSoPytago {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = sc.nextInt(); 
        while(t-- > 0){
            int n = sc.nextInt(); 
            Long [] arr = new Long[n]; 
            for(int i = 0; i < n; i++){
                Long tmp = sc.nextLong(); 
                arr[i] = tmp * tmp; 
            }
            Arrays.sort(arr, Collections.reverseOrder());
            boolean ok = false; 
            for(int i = 0; i < n - 1; i++){
                int l = i + 1, r = n - 1; 
                while(l < r){
                    Long sum = arr[l] + arr[r]; 
                    if(sum < arr[i]){
                        r--; 
                    }
                    else if(sum > arr[i]){
                        l++; 
                    }
                    else{
                        System.out.println("YES");
                        ok = true; 
                        break; 
                    }
                }
                if(ok) break; 
            }
            if(!ok) System.out.println("NO");
        }
    }
}
