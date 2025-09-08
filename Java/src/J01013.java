/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J01013 {
    public static long pt(long n){
        long sum = 0;
        for(int i = 2; i * i <= n; i++){
            while(n % i == 0){
                sum += i;
                n/= i;
            }
        }
        if(n > 1) sum += n;
        return sum;
    }
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long x, ans = 0;
        while(n-- > 0){
            x = sc.nextInt();
            ans += pt(x);
        }
        System.out.println(ans);
    }
}
