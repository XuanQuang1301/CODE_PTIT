/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.lang.Math.*;
import java.util.Scanner;
import java.math.BigInteger;

class PS{
    private BigInteger a;
    private BigInteger b;
    public PS(BigInteger a, BigInteger b){
        this.a = a;
        this.b = b;
    }
    public String toString(){
        BigInteger x = a.gcd(b);
        return a.divide(x) + "/" + b.divide(x);
    }
}
public class J04003 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger x = sc.nextBigInteger();
        BigInteger y = sc.nextBigInteger();
        PS a = new PS(x, y);
        System.out.println(a);
    }
}
