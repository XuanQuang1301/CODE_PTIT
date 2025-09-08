/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.*;

public class J02021 {
    public static int n, k, cnt;
    public static int [] a;
    public static void Try(int i){
        for(int j = a[i - 1] + 1; j <= n; j++){
            a[i] = j;
            if(i == k){
                for(int num = 1; num <= k; num++){
                    System.out.print(a[num]);
                }
                System.out.print(" ");
                cnt++;
            }
            else{
                Try(i + 1);
            }
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        k = sc.nextInt();
        a = new int[k + 1];
        a[0] = 0;
        Try(1);
        System.out.println();
        System.out.println("Tong cong co " + cnt + " to hop");
    }
}
