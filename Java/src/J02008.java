/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J02008 {
    public static long Gcd(long a, long b){
        while(b > 0){
            long tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long n = sc.nextInt();
            long ans = 1;
            for(long i = 1; i <= n; i++){
                ans = (ans * i) / Gcd(ans, i);
            }
            System.out.println(ans);
        }
    }
}
