/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J03008 {
    public static boolean nt(char x){
        if(x != '2' && x != '3' && x != '5' && x != '7'){ return false;}
        return true;
    }
    public static String check(String s){
        int l = 0, r = s.length() - 1;
        while(l < r){
            if(s.charAt(l) != s.charAt(r)){
                return "NO";
            }
            if(nt(s.charAt(l)) == false || nt(s.charAt(r)) == false) return "NO";
            l++;
            r--;
        }
        return "YES";
    }
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.next();
            System.out.println(check(s));
        }
    }
}
