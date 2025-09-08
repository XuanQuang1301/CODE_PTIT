/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;
class NV{
    private String ten, gioitinh, ngaysinh, dc, thue, day;
    public NV(String ten, String gioitinh, String ngaysinh, String dc, String thue, String day){
        this.ten = ten;
        this.gioitinh = gioitinh;
        this.ngaysinh = ngaysinh;
        this.dc = dc;
        this.thue = thue;
        this.day = day;
    }
    public NV(){
        
    }
    static Scanner sc = new Scanner(System.in);
    void Output(){
        System.out.print("00001 ");
        System.out.printf("%s %s %s %s %s %s", ten, gioitinh, ngaysinh, dc, thue, day);
    }
    void Input(){
        ten = sc.nextLine();
        gioitinh = sc.next();
        ngaysinh = sc.next();
        sc.nextLine();
        dc = sc.nextLine();
        thue = sc.next();
        day = sc.next();
        if(ngaysinh.charAt(2) != '/'){
            ngaysinh = "0" + ngaysinh;
        }
        if(ngaysinh.charAt(5) != '/'){
            ngaysinh = ngaysinh.substring(0, 3) + "0" + ngaysinh.substring(3);
        }
        if(day.charAt(2) != '/'){
            day = "0" + day;
        }
        if(day.charAt(5) != '/'){
            day = day.substring(0, 3) + "0" + day.substring(3);
        }
    }
}
public class J04007 {
    public static void main(String [] args){
        NV a = new NV();
        a.Input();
        a.Output();
    }
}
