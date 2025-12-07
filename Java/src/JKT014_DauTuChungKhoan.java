import java.util.*; 

public class JKT014_DauTuChungKhoan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = sc.nextInt(); 
        while(t-- > 0){
            int n = sc.nextInt(); 
            int [] arr = new int[n]; 
            for (int i = 0; i < n; i++) arr[i] = sc.nextInt(); 
            Stack<Integer> st = new Stack<>(); 
            List<Integer> list = new ArrayList<>();  
            for(int i = 0; i < n; i++){
                while(!st.isEmpty() && arr[st.peek()] <= arr[i]){
                    st.pop(); 
                }
                if(st.isEmpty()) list.add(i + 1); 
                else list.add(i - st.peek()); 
                st.push(i); 
            }
            for(int i : list){ 
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}
