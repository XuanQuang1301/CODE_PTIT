/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J01006 {
    public static void main(String [] args){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t > 0){
            int n = scanner.nextInt();
            long a[] = new long[n + 1];
            a[0] = 0;
            a[1] = 1;
            for(int i = 2; i <= n; i++){
                a[i] = a[i - 1] + a[i - 2];
            }
            System.out.println(a[n]);
            t--;
        }
        scanner.close();
    }
}
