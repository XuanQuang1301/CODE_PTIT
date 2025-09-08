/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J01021 {
    public static final long MOD = 1000000007;
    public static long Mul(long a, long b){
        if(b == 0)return 1;
        if(b == 1)return a;
        long c = Mul(a, b / 2) % MOD;
        if(b % 2 == 0){
            return (c % MOD * c % MOD) % MOD;
        }
        return (c % MOD * c % MOD * a % MOD) % MOD;
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = 0;
        while(t++ < 20 && true){
            long a = sc.nextLong();
            long b = sc.nextLong();
            if(a == 0 && b == 0){
                sc.close();
                return;
            }
            System.out.println(Mul(a, b) % MOD);            
        }
    }
}
