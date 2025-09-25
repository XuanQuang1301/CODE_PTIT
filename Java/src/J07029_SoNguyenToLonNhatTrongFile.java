import java.util.*;
import java.io.*;

public class J07029_SoNguyenToLonNhatTrongFile {
    public static boolean NT(Integer n){
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        return n >= 2;
    }
    public static void main(String [] args) throws IOException, ClassNotFoundException{
        ObjectInputStream is = new ObjectInputStream(new FileInputStream("DATA.in"));
        List<Integer> list = (ArrayList<Integer>) is.readObject();
        int []dd = new int[1000000];
        for(Integer i : list){
            dd[i]++;
        }
        Collections.sort(list, Collections.reverseOrder());
        int j = 0;
        for(Integer i : list){
            if(NT(i) && dd[i] > 0){
                System.out.println(i  + " " + dd[i]);
                dd[i] = 0;
                j++;
            }
            if(j == 10) break;
        }
    }
}
