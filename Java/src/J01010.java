/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J01010 {
    public static char ans(char a){
        if (a == '0' || a == '8' || a == '9') return '0';
        return '1';
    }
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t-- > 0){
            String s = scanner.next();
            char [] arr = s.toCharArray();
            boolean ok = true;
            for(int i = 0; i < s.length(); i++){
                if(arr[i] != '0' && arr[i] != '1' && arr[i] != '8' && arr[i] != '9'){
                    ok = false;
                    break;
                }
                else{
                    arr[i] = ans(arr[i]);
                }
            }
            long ans = 0;
            for(int i = 0; i < s.length(); i++){
                ans = ans * 10 + (arr[i] - '0');
            }
            if(ok && ans != 0){
                System.out.println(ans);
            }
            else{
                System.out.println("INVALID");
            }            
        }
        scanner.close();
    }
}
