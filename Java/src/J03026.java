/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J03026 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String a = sc.next();
            String b = sc.next();
            if(a.length() != b.length()){
                System.out.println(Math.max(a.length(), b.length()));
            }
            else{
                if(a.equals(b)){
                    System.out.println("-1");
                }
                else{
                    System.out.println("1");
                }
            }
        }
    }
}
