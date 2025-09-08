/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J03025 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String s = sc.next();
            int l = 0, r = s.length() - 1;
            int ans = 0;
            while(l < r){
                if(s.charAt(l) != s.charAt(r)) ans++;
                l++; r--;
            }
            if((s.length() % 2 == 0 && ans == 1) || s.length() % 2 == 1 && ans <= 1){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
