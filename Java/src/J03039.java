/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;
import java.math.BigInteger;

public class J03039 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            BigInteger tmp = a.mod(b), tmp2 = b.mod(a);
            if(tmp.equals(BigInteger.ZERO) || tmp2.equals(BigInteger.ZERO)){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}
