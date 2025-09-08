/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J01003 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        float n = scanner.nextFloat();
        float m = scanner.nextFloat();
        if(n == 0 && m != 0){
            System.out.println("VN");
        }
        else if(m == 0 && n == 0){
            System.out.println("VSN");
        }
        else{
            float tmp = (float)(-m/n);
            System.out.printf("%.2f\n", tmp);
        }
        scanner.close();
    }
}
