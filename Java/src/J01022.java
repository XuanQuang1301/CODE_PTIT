/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J01022 {
    static long [] fib = new long[93];
    static char findChar(int n, long k){
        if(n == 1) return '0';
        if(n == 2) return '1';
        if(k <= fib[n - 2]){
            return findChar(n - 2, k);
        }
        else{
            return findChar(n - 1, k - fib[n - 2]);
        }
    }   
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        fib[1] = 1;
        fib[2] = 1;
        for(int i = 3; i < 93; i++){
            fib[i] = fib[i - 1] + fib[i- 2];
        }
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            long m = sc.nextLong();
            System.out.println(findChar(n, m));
        }
        sc.close();
    }
}
