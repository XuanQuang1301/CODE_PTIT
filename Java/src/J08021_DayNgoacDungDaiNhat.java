import java.util.*; 

public class J08021_DayNgoacDungDaiNhat {
    static int Solved(String s){
        Stack<Integer> q = new Stack<>(); 
        q.push(-1); 
        int res = 0; 
        for(int i =0; i < s.length(); i++){
            if(s.charAt(i) == '('){
                q.push(i); 
            }
            else{
                q.pop(); 
                if(!q.empty()){
                    res =  Math.max(res, i - q.peek()); 
                }
                else{
                    q.push(i);
                }
            }
        }
        return res; 
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = Integer.parseInt(sc.nextLine()); 
        while(t-- > 0){
            String s = sc.nextLine(); 
            System.out.println(Solved(s));
        }
    }
}
