/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J03027 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int i = 0;
        while(true && i < s.length() - 1){
            if(s.charAt(i) == s.charAt(i + 1)){
                s = s.substring(0, i) + s.substring(i + 2);
                i = 0;
            }
            else i++;
        }
        if(s.length() == 0) System.out.println("Empty String");
        else System.out.println(s);
    }
}
