/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.*;


public class J02017 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> list = new ArrayList<>();
        for(int i = 0; i < n; i++){
            int tmp = sc.nextInt();
            list.add(tmp);
        }
        int i = 1;
        while(i < list.size()){
            if((list.get(i) + list.get(i - 1)) % 2 == 0){
                list.remove(i);
                list.remove(i - 1);
                if(i > 1){
                    i--;
                }
            }
            else{
                i += 1;
            }
        }
        System.out.println(list.size());
    }
}
