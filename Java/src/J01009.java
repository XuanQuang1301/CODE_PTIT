/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;
        
public class J01009 {
    public static long tich(int n){
        long sum  = 1;
        for(int i = 1; i <= n; i++){
            sum *= i;
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long sum = 0;
        for(int i = 1; i <= n; i++){
            sum += tich(i);
        }
        System.out.println(sum);
    }
}
