/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J03021 {
    public static int number(char a){
        if(a == 'A' || a == 'B' || a == 'C') return 2;
        else if(a == 'D' || a == 'E' || a == 'F') return 3;
        else if(a == 'G' || a == 'H' || a == 'I') return 4;
        else if(a == 'J' || a == 'K' || a == 'L') return 5;
        else if(a == 'M' || a == 'N' || a == 'O') return 6;
        else if(a == 'P' || a == 'Q' || a == 'R' || a == 'S') return 7;
        else if(a == 'T' || a == 'U' || a == 'V') return 8;
        return 9;
    }
    private static String check(String a){
        int l = 0, r = a.length() - 1;
        while(l < r){
            if(number(a.charAt(l)) != number(a.charAt(r))){
                return "NO";
            }
            l++; r--;
        }
        return "YES";
    }
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String s = sc.next().toUpperCase();
            
            System.out.println(check(s));
        }
    }
}
