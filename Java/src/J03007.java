/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J03007 {
    public static String check(String s){
        if(s.charAt(0) != '8' || s.charAt(s.length() - 1) != '8') return "NO";
        int sum = 0;
        int l = 0, r = s.length() - 1;
        while(l < r){
            if(s.charAt(l) != s.charAt(r)) return "NO";
            sum = sum + (s.charAt(l) - '0') + (s.charAt(r) - '0');
            l++;
            r--;
        }
        if(l == r) sum += (s.charAt(l) - '0');
        if(sum % 10 != 0) return "NO";
        return "YES";
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.next();
            System.out.println(check(s));
        }
    }
}
