/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;
import java.util.Map;
import java.util.*;
//Integer 
public class J02007 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int j = 1; j <= t; j++){
            
            int n = sc.nextInt();
            int []a = new int[n];
            Map<Integer, Integer> ans = new LinkedHashMap<> ();
            
            for(int i = 0; i < n; i++){
                a[i] = sc.nextInt();
                ans.put(a[i], ans.getOrDefault(a[i], 0) + 1);
            }
            System.out.println("Test " + j + ":");
            for(Map.Entry<Integer, Integer> num : ans.entrySet()){
                System.out.println(num.getKey() + " xuat hien " + num.getValue() + " lan");
            }
        }
    }
}
