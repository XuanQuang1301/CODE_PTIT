/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J01016 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int cnt_F = 0, cnt_S = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == '4'){
                cnt_F++;
            }
            if(s.charAt(i) == '7'){
                cnt_S++;
            }
        }
        if(cnt_F + cnt_S == 4 || cnt_F + cnt_S == 7){
            System.out.println("YES");
        }
        else System.out.println("NO");
    }
}
