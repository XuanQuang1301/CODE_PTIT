
import java.util.*;
import java.io.*;
import java.text.*;

public class J07015_SonguyentotrongFilenhiphan {
    static boolean NT(Integer n){
        if(n < 2) return false; 
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false; 
        }
        return true; 
    }
    public static void main(String[] args)throws IOException, ClassNotFoundException {
        ObjectInputStream io = new ObjectInputStream(new FileInputStream("SONGUYEN.in")); 
        List<Integer> list = (ArrayList<Integer>) io.readObject(); 
        Map<Integer, Integer> mp = new TreeMap<>(); 
        for(Integer i : list){
            if(NT(i)){
                mp.put(i, mp.getOrDefault(i, 0) + 1); 
            }
        }
        for(Integer i : mp.keySet()){
            System.out.println(i + " " + mp.get(i));
        }
    }
}
