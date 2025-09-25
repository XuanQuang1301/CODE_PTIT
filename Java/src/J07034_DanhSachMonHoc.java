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

class MH implements Comparable<MH> {
    private String ma, ten; 
    private int tin;
    public MH(String ma, String ten, int tin){
        this.ma = ma;
        this.ten = ten; 
        this.tin = tin;
    }
    public MH(){
        
    }
    public String getTen() {
        return ten;
    }
    
    @Override 
    public String toString(){
        return ma + " " + ten + " " + tin;
    }
    @Override 
    public int compareTo(MH a){
        return ten.compareTo(a.getTen());
    }
}
public class J07034_DanhSachMonHoc {
    public static void main(String [] args)throws FileNotFoundException{
        Scanner sc = new Scanner(new File("MONHOC.in"));
        int t = Integer.parseInt(sc.nextLine());
        MH [] mh = new MH[t];
        for(int i = 0; i < t; i++){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            int tin = Integer.parseInt(sc.nextLine());
            mh[i] = new MH(ma, ten, tin);
        }
        Arrays.sort(mh);
        for(int i = 0; i < t; i++){
            System.out.println(mh[i]);
        }
    }
}
