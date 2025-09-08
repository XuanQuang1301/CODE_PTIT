/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J03024 {
    public static String check(String s){
        if(s.charAt(0) == '0') return "INVALID";
        int sum_even = 0, sum_odd = 0;
        for(char i : s.toCharArray()){
            if(!Character.isDigit(i)) return "INVALID";
            if((i - '0') % 2 == 0) sum_even++;
            else sum_odd++;
        }
        if(sum_even > sum_odd && s.length() % 2 == 0) return "YES";
        if(sum_odd > sum_even && s.length() % 2 == 1) return "YES";
        return "NO";
    }
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String s = sc.next();
            System.out.println(check(s));
        }
    }
}
