/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;
public class J03005 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine();
            s = s.toLowerCase();
            String []arr = s.trim().split("\\s+");
            for(int i = 0; i < arr.length; i++){
                arr[i] = arr[i].substring(0, 1).toUpperCase() + arr[i].substring(1);
            }
            for(int i = 1; i < arr.length; i++){
                System.out.print(arr[i]);
                if(i < arr.length - 1){
                    System.out.print(" ");
                }
            }
            System.out.println(", " + arr[0].toUpperCase());
        }
    }
}
