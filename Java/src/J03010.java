/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class J03010 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        ArrayList<String> dd = new ArrayList<>();
        
        while(t-- > 0){
            String [] arr = sc.nextLine().toLowerCase().trim().split("\\s+");
            String ans = "";
            for(int i = 0; i < arr.length - 1; i++){
                ans += arr[i].substring(0, 1);
            }
            ans = arr[arr.length - 1] + ans;
            dd.add(ans);
            int count = Collections.frequency(dd, ans);
            if(count > 1) ans += count;
            System.out.println(ans + "@ptit.edu.vn");
        }
    }
}
