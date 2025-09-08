/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J02014 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int [] a = new int[n];
            for(int i = 0; i < n; i++) a[i] = sc.nextInt();
            int []tmp1 = new int[n];
            int []tmp2 = new int[n];
            tmp1[0] = a[0];
            for(int i = 1; i < n; i++){
                tmp1[i] = tmp1[i - 1] + a[i];
            }
            tmp2[n - 1] = a[n - 1];
            for(int i = n - 2; i >= 0; i--){
                tmp2[i] = tmp2[i + 1] + a[i];
            }
            int j = -1;
            for(int i = 0; i < n; i++){
                if(tmp1[i] - a[i] == tmp2[i] - a[i]){
                    j = i + 1;
                    break;
                }
            }
            System.out.println(j);
        }
    }
}
