import java.util.*; 
import java.io.*; 

public class J07085_TongChuSo {
    public static void main(String[] args)throws IOException, FileNotFoundException, ClassNotFoundException{
        ObjectInputStream sc = new  ObjectInputStream(new FileInputStream("DATA.in")); 
        ArrayList<String> list = (ArrayList<String>) sc.readObject(); 
        sc.close();
        for(String s : list){
            String ans = ""; 
            int sum = 0; 
            for(int i = 0; i < s.length(); i++){
                if(s.charAt(i) >= '0' && s.charAt(i) <= '9'){
                    ans += s.charAt(i); 
                    sum += (s.charAt(i) - '0'); 
                }
            }
            while(ans.charAt(0) == '0') ans = ans.substring(1); 
            System.out.println(ans + " " + sum);
        }
    }
}
