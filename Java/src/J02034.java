/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J02034 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] a = new int[n];
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();
        int [] tmp = new int[205];
        for(int i = 0; i <= 204; i++){
            tmp[i] = 0;
        }
        int Max = -1;
        for(int i = 0; i < n; i++){
            tmp[a[i]] = 1;
            Max = Math.max(Max, a[i]);
        }
        boolean ok = false;
        for (int i = 1; i <= Max; i++){
            if(tmp[i] != 1){
                System.out.println(i);
                ok = true;
            }
        }
        if(ok == false){
            System.out.println("Excellent!");
        }
    }
}
