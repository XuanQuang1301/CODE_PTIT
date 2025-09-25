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
class DN implements Comparable<DN> {
    private String ma, ten; 
    private int sv; 
    public DN(){
        
    }
    public DN(String ma, String ten, int sv){
        this.ma = ma; 
        this.ten = ten; 
        this.sv = sv;
    }
    @Override 
    public String toString(){
        return ma  + " " + ten + " " + sv;
    }

    public String getMa() {
        return ma;
    }
    @Override 
    public int compareTo(DN a){
        return ma.compareTo(a.getMa());
    }
}
public class J07037_DanhSachDoanhNghiep {
    public static void main(String [] args)throws FileNotFoundException{
        Scanner sc = new Scanner(new File ("DN.in"));
        int t = Integer.parseInt(sc.nextLine());
        DN[] dn = new DN[t];
        for(int i = 0; i < t; i++){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            int sv = Integer.parseInt(sc.nextLine());
            dn[i] = new DN(ma, ten, sv);
        }
        Arrays.sort(dn);
        for(int i = 0; i < t; i++){
            System.out.println(dn[i]);
        }
    }
}
