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
public class J07033_DanhSachSinhVienTrongFile1 {
    public static void main(String [] args)throws FileNotFoundException{
        Scanner sc = new Scanner(new File("SINHVIEN.in"));
        int t = Integer.parseInt(sc.nextLine());
        SV [] sv = new SV[t];
        for(int i = 0; i < t; i++){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            String lop = sc.nextLine();
            String email = sc.nextLine();
            sv[i] = new SV(ma, ten, lop, email);
        }
        Arrays.sort(sv);
        for(int i = 0; i < t; i++){
            System.out.println(sv[i]);
        }
    }
}
class SV implements Comparable<SV> {
    private String ma, ten, lop, email;
    public SV(){
        
    }
    public String getMa() {
        return ma;
    }
    public SV(String ma, String ten, String lop, String email){
        this.ma = ma;
        this.ten = ten;
        this.lop = lop;
        this.email = email;
        fix();
    }
    private void fix(){
        String res = "";
        String [] list = ten.trim().split("\\s+");
        for(int i = 0; i < list.length; i++){
            res += list[i].substring(0, 1).toUpperCase() + list[i].substring(1).toLowerCase();
            if(i != list.length - 1) res += " ";
        }
        ten = res;
    }
    @Override
    public String toString(){
        return ma + " " + ten + " " + lop + " " + email;
    }
    @Override 
    public int compareTo(SV a){
        return ma.compareTo(a.getMa());
    }
}
