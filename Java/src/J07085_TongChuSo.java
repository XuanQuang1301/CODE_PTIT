import java.util.*; 
import java.io.*; 

public class J07085_TongChuSo {
    public static void main(String[] args)throws Exception{
        ObjectInputStream sc = new  ObjectInputStream(new FileInputStream("DATA.in")); 
        ArrayList<String> list = (ArrayList<String>) sc.readObject(); 
        sc.close();
        for(String s : list){
            int ans = 0; 
            for(int i = 0; i < s.length(); i++){
                if(Character.isDigit(s.charAt(i))){
                    ans = ans * 10 + (s.charAt(i) - '0');
                }
            }
            System.out.print(ans + " ");
            int sum = 0; 
            while(ans > 0){
                sum += ans % 10; 
                ans /= 10; 
            }
            System.out.println(sum);
        }
    }
}
