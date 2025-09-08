/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */

import java.util.Scanner;
public class J03032 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String [] arr = sc.nextLine().trim().split("\\s+");
            for(int i = 0; i < arr.length; i++){
                System.out.print( new StringBuilder(arr[i]).reverse().toString() + " ");
            }
            System.out.println();
        }
    }
}
