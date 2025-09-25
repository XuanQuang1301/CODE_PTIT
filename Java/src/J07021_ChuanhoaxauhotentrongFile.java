/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.*;
import java.io.*;
import java.text.*;

public class J07021_ChuanhoaxauhotentrongFile {
    public static String nomal(String s){
        return s.substring(0, 1).toUpperCase() + s.substring(1).toLowerCase();
    }
    public static void main(String [] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("DATA.in"));
        while(true){
            String lines = sc.nextLine();
            if(lines.equals("END")){
                break;
            }
            String [] list = lines.trim().split("\\s+");
            String res = "";
            for(String i : list){
                res += nomal(i) + " ";
            }
            System.out.println(res);
        }
    }
}
