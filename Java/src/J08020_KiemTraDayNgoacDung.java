import java.util.Scanner; 
import java.util.ArrayList; 
import java.util.List; 
public class J08020_KiemTraDayNgoacDung {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int t = sc.nextInt(); 
         
        while(t-- > 0){
            String s = sc.next(); 
            List<Character> ans = new ArrayList<>();
            for(int i = 0; i < s.length(); i++){
                Character tmp = s.charAt(i); 
                if(tmp == ')' && ans.size() > 0 && ans.get(ans.size() - 1) == '('){
                    ans.remove(ans.size() - 1); 
                }
                else if(tmp == '}' && ans.size() > 0 && ans.get(ans.size() - 1) == '{'){
                    ans.remove(ans.size() - 1); 
                }
                else if(tmp == ']' && ans.size() > 0 && ans.get(ans.size() - 1) == '['){
                    ans.remove(ans.size() - 1); 
                }
                else ans.add(tmp);
            }
            System.out.println(ans.size() == 0 ? "YES" : "NO");
        }
    }
}
