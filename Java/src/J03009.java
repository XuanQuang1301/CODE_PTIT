/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;
import java.util.TreeSet;
public class J03009 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();
            String [] arr1 = s1.trim().split("\\s+");
            String [] arr2 = s2.trim().split("\\s+");
            TreeSet<String> ans1 = new TreeSet<>();
            for(int i = 0; i < arr1.length; i++){
                ans1.add(arr1[i]);
            }
            TreeSet<String> ans2 = new TreeSet<>();
            for(int i = 0; i < arr2.length; i++){
                ans2.add(arr2[i]);
            }
            for(String i : ans1){
                if(ans2.contains(i) == false){
                    System.out.print(i + " ");
                }
            }
            System.out.println();
        }
    }
}
