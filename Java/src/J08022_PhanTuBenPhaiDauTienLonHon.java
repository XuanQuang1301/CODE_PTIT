import java.util.*; 

public class J08022_PhanTuBenPhaiDauTienLonHon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = sc.nextInt(); 
        while(t-- > 0){
            int n = sc.nextInt(); 
            int [] a = new int[n]; 
            for(int i = 0; i < n; i++) a[i] = sc.nextInt(); 
            Stack<Integer> st = new Stack<>(); 
            List<Integer> list = new ArrayList<>(); 
            st.push(a[n - 1]); 
            list.add(-1); 
            for(int i = n - 2; i >= 0; i--){
                while(!st.empty() && a[i] >= st.peek()){
                    st.pop(); 
                }
                if(st.empty()){
                    st.push(a[i]); 
                    list.add(-1); 
                }
                else{
                    
                    list.add(st.peek()); 
                    st.push(a[i]); 
                }
            }
            Collections.reverse(list);
            for(Integer i : list){
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}
