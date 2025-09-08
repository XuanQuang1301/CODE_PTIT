/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J01018 {
    public static boolean check(long a){
        long sum = 0;
        while(a > 0){
            long tmp = a % 10;
            sum += tmp;
            a /= 10;
            if(a > 0 && Math.abs(a % 10 - tmp) != 2){
                return false;
            }
        }
        if(sum % 10 == 0) return true;
        return false;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long a = sc.nextLong();
            if(check(a)){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}
