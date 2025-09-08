/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J02106 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = 0;
        for(int i = 0; i < n; i++){
            int x = 0, y = 0;
            for(int j = 0; j < 3; j++){
                int z = sc.nextInt();
                if(z == 1) x++;
                else y++;
            }
            if(x > y) ans++;
        }
        System.out.println(ans);
    }
}
