/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J02011 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] a = new int[n];
        int Case = 1;
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();
        for(int i = 0; i < n - 1; i++){
            int tmp = i;
            for(int j = i + 1; j < n; j++){
                if(a[j] < a[tmp]){
                    tmp = j;
                }
            }
                int ans = a[i];
                a[i] = a[tmp];
                a[tmp] = ans;
                System.out.print("Buoc " + Case + ": ");
                for(int j = 0; j < n; j++){
                    System.out.print(a[j] + " ");
                }
                Case++;
                System.out.println();
            
        }
    }
}
