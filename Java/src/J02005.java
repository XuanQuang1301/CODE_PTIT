/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Arrays;
import java.util.Scanner;

public class J02005 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int [] a = new int[n];
        int [] b = new int[m];
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();
        for(int i = 0; i < m; i++) b[i] = sc.nextInt();
        int i = 0, j = 0;
        Arrays.sort(a);
        Arrays.sort(b);
        while(i < n && j < m){
            if(a[i] < b[j]){
                i++;
            }
            else if(a[i] > b[j]){
                j++;
            }
            else{
                System.out.print(a[i] + ' ');
                int val = a[i];
                while(i < n && a[i] == val) i++;
                while(j < m && b[j] == val) j++;
            }
        }
        System.out.println();
    }
}
