/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.TreeMap;

public class J07004 {
    public static void main(String[] args)throws FileNotFoundException{
        Scanner sc = new Scanner(new File("DATA.in"));
        TreeMap<Integer, Integer> ans = new TreeMap<>();
        while(sc.hasNext()){
            Integer x = sc.nextInt();
            if(ans.containsKey(x)){
                ans.put(x, ans.get(x) + 1);
            }else{
                ans.put(x, 1);
            }
        }
        for(int i : ans.keySet()){
            System.out.println(i + " " + ans.get(i));
        }
    }
}
