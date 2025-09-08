/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J02013 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] a = new int[n];
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();
        
        for(int i = 0; i < n - 1; i++){
            boolean ok = false;
            for(int j = 0; j < n - 1; j++){
                if(a[j + 1] < a[j]){
                    int tmp = a[j];
                    a[j] = a[j +  1];
                    a[j +  1] = tmp;
                    ok = true;
                }
            }
            if(ok){
                int tmp = i + 1;
                System.out.print("Buoc " + tmp + ": ");
                for(int j = 0; j < n; j++){
                    System.out.print(a[j] + " ");
                }
                System.out.println();
            }
        }
    }
}
