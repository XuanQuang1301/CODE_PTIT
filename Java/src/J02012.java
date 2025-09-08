/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J02012 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
        }
        int test = 0;
        System.out.println("Buoc " + test + ": " + a[0]);
        for(int i = 1; i < n; i++){
            int j = i - 1;
            int key = a[i];
            while(j >= 0 && a[j] > key){
                a[j + 1] = a[j];
                j -= 1;
            }
            test++;
            a[j + 1] = key;
            System.out.print("Buoc " + test + ": ");
            for(int k = 0; k <= test; k++){
                System.out.print(a[k] + " ");
            }
            System.out.println();
        }
    }
}
