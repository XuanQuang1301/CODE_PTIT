import java.io.*;
import java.util.*;

public class J07031_CapNguyenToTrongFile2 {
    public static boolean NT(Integer n){
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        return n > 1;
    }
    public static void main(String [] args)throws IOException, ClassNotFoundException{
        ObjectInputStream is1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        List<Integer> list1 = (ArrayList<Integer>) is1.readObject();
        int []dd = new int[1000000];
        for(Integer i : list1){
            if(NT(i)){
                dd[i]++;
            }
        }
        is1.close();
        ObjectInputStream is2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        List<Integer> list2 = (ArrayList<Integer>) is2.readObject();
        int []dd2 = new int[1000000];
        for(Integer i : list2){
            if(NT(i)){
                dd2[i]++;
            }
        }
        is2.close();
        Collections.sort(list1);
        for(Integer i : list1){
            if(dd[i] > 0 && dd[1000000 - i] > 0 && i < 500000 && dd2[i] == 0 && dd2[1000000 - i] == 0){
                Integer x = 1000000 - i;
                System.out.println(i + " " + x);
                dd[i] = 0; dd[x] = 0;
            }
        }
    }
}
