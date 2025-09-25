
import java.util.*;
import java.io.*;

public class J07032_SoThuanNghichTrongFile {
    public static boolean check(String s){
        StringBuilder x = new StringBuilder(s).reverse();
        if(!x.toString().equals(s)) return false;
        if(s.length() % 2 == 0 || s.length() == 1) return false;
        for(int i = 0; i < s.length(); i++){
            if((s.charAt(i) - '0') % 2 == 0) return false;
        }
        return true;
    }
    public static void main(String [] args)throws IOException, ClassNotFoundException{
        ObjectInputStream is = new ObjectInputStream(new FileInputStream("DATA1.in"));
        List<Integer> list = (ArrayList<Integer>) is.readObject();
        long [] dd1 = new  long[1000005];
        for(Integer i : list){
            if(check(i.toString())){
                dd1[i]++;
            }
        }
        is.close();
        list.clear();
        is = new ObjectInputStream(new FileInputStream("DATA2.in"));
        List<Integer> list2 = (ArrayList<Integer> ) is.readObject();
        long [] dd2 = new long[1000005];
        for(Integer i : list2){
            if(check(i.toString())){
                dd2[i]++;
            }
        }
        is.close();
        
        int cnt = 0;
        for(int i = 100; i < 1000005; i++){
            if(dd1[i] > 0 && dd2[i] > 0){
                long tmp = dd1[i] + dd2[i];
                System.out.println(i +" " + tmp);
                cnt++;
                dd1[i] = 0; 
            }
            if(cnt == 10){
                break;
            }
        }
    }
}
