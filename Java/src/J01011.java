/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J01011 {
    public static long gcd(long n, long m){
        while(m != 0){
            long tmp = n % m;
            n = m;
            m = tmp;
        }
        return n;
    }
    public static void main(String [] args){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t-- > 0){
            long n = scanner.nextLong();
            long m = scanner.nextLong();
            long ans = gcd(n, m);
            System.out.println((n * m)/ans + " " + ans);
        }
    }
}
