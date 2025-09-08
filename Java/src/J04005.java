/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;

public class J04005 {
    public static void main(String [] args){
        HS a = new HS();
        a.IntPut();
        a.Output();
    }
}
class HS{
    private String hoten, ngaysinh;
    private double x, y, z;
    static Scanner sc = new Scanner(System.in);
    public HS(){
        hoten = "";
        ngaysinh = "";
        x = 0.0; y = 0.0; z = 0.0;
    }
    public HS(String hoten, String ngaysinh, double x, double y, double z){
        this.hoten = hoten;
        this.ngaysinh = ngaysinh;
        this.x = x;
        this.y = y;
        this.z = z;
    }
    public double getTong(){
        return (x + y + z);
    }
    void Output(){
        System.out.printf("%s %s %.1f", hoten, ngaysinh, getTong());
    }
    void IntPut(){
        hoten = sc.nextLine();
        ngaysinh = sc.next();
        x = sc.nextDouble();
        y = sc.nextDouble();
        z = sc.nextDouble();
    }
}