/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.math.BigInteger;
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class J07003 {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("DATA.in"));
        String s = sc.next();
        while(s.length() > 1){
            int n = s.length() / 2;
            BigInteger x = new BigInteger(s.substring(0, n));
            BigInteger y = new BigInteger(s.substring(n));
            BigInteger z = x.add(y);
            System.out.println(z);
            s = z.toString();
        }
    }
}
