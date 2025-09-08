/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J01004 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t > 0){
            int n = scanner.nextInt();
            int ok = 0;
            for(int i = 2; i * i <= n; i++){
                if(n % i == 0){
                    ok = 1;
                    break;
                }
            }
            if(n < 2 || ok == 1){
                System.out.println("NO");
            }
            else{
                System.out.println("YES");
            }
            t--;
        }
        scanner.close();
    }
}
