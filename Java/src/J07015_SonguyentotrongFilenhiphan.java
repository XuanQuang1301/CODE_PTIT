/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.*;
import java.io.*;
import java.text.*;

public class J07015_SonguyentotrongFilenhiphan {
    public static boolean NT(Integer n){
        if(n < 2) return false;
        if(n == 2) return true;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    public static void main(String [] args) throws IOException, ClassNotFoundException{
        ObjectInputStream io = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
        List<Integer> list = (ArrayList<Integer>) io.readObject();
        TreeMap<Integer, Integer> mp = new TreeMap<>();
        for(Integer i : list){  
            if(NT(i)){
                mp.put(i, mp.getOrDefault(i, 0) + 1);
            }
        }
        for(Integer key : mp.keySet()){
            System.out.println(key + " " + mp.get(key));
        }
    }
}
