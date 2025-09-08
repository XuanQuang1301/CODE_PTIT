/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J01014 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long n = sc.nextLong();
            long ans = 0;
            for(long i = 2; i * i <= n; i++){
                if(n % i == 0){
                    if(ans < i){
                        ans = i;
                    }
                    while(n % i == 0){
                        n /= i;
                    }
                }
            }
            if(n > 1 && n > ans) ans = n;
            System.out.println(ans);
        }
    }
}
