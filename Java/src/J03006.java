/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J03006 {
    public static String check(String s){
        int i = 0, j = s.length() - 1;
        while(i < j){
            if(s.charAt(i) != s.charAt(j)){
                return "NO";
            }
            if((s.charAt(i) - '0') % 2 == 1 || (s.charAt(j) - '0') % 2 == 1){
                return "NO";
            }
            i++;
            j--;
        }
        return "YES";
    }
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.next();
            //System.out.println(s);
            System.out.println(check(s));
        }
    }
}
