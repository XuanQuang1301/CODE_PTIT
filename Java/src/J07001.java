/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.io.File;
import java.util.Scanner;
import java.io.FileNotFoundException;
public class J07001 {
    public static void main (String [] args)throws FileNotFoundException {
        File myObj = new File("DATA.in");
        Scanner sc = new Scanner(myObj);
        while(sc.hasNext()){
            System.out.println(sc.nextLine());
        }
    }
}
