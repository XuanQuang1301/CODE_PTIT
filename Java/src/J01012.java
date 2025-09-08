/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J01012 {
    public static void main(String [] args){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t-- >  0){
            int n = scanner.nextInt();
            int tmp = 0;
            for(int i = 1; i * i <= n; i++){
                if(n % i == 0){
                    if(i % 2 == 0){
                        tmp++;
                    }
                    if((n / i) % 2 == 0){
                        tmp++;
                    }
                    if( i % 2 == 0 && i * i == n){
                        tmp--;
                    }
                }
            }
            System.out.println(tmp);
        }
    }
}   
