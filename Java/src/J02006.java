/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
//import java.util.Set;
import java.util.HashSet;
import java.util.Scanner;
import java.util.TreeSet;

public class J02006 {
       public static void main(String[] args){
           Scanner sc = new Scanner(System.in);
           int n = sc.nextInt();
           int m = sc.nextInt();
           int []a = new int[n];
           int []b = new int[m];
           HashSet<Integer> mySet = new HashSet <> ();
           for(int i = 0; i < n; i++){
                a[i] = sc.nextInt();
                mySet.add(a[i]);
           }
           for(int j = 0; j < m; j++){
                b[j] = sc.nextInt();
                mySet.add(b[j]);
           }
           TreeSet<Integer> ans = new TreeSet<> (mySet);
           for (Integer num : ans){
               System.out.print(num + " ");
           }
           System.out.println();
       }
}
