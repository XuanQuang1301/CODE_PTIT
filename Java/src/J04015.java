/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;
class GV{
    private String ma, ten;
    private long luong;
    public GV(){
        
    }
    static Scanner sc = new Scanner(System.in);
    public GV(String ma, String ten, long luong){
        this.ma = ma;
        this.ten = ten;
        this.luong = luong;
    }
    void Input(){
        ma = sc.next();
        sc.nextLine();
        ten = sc.nextLine();
        luong = sc.nextLong();
    }
    void Output(){
        String s = ma.substring(0, 2);
        int phucap = 0;
        if(s.equals("HT")){
            phucap = 2000000;
        }
        else if(s.equals("HP")){
            phucap = 900000;
        }
        else {
            phucap = 500000;
        }
        int heso = (ma.charAt(ma.length() - 2) - '0') * 10 + (ma.charAt(ma.length() - 1) - '0');
        System.out.printf("%s %s %d %d %d", ma, ten, heso, phucap, luong * heso + phucap);
    }
}
public class J04015 {
    public static void main(String[] args){
        GV a = new GV();
        a.Input();
        a.Output();
    }
}
