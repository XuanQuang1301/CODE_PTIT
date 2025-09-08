/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Arrays;
import java.util.Scanner;
class MH implements Comparable<MH>{
    private String ma, ten, dv;
    private long gm, gb;
    public MH(){};
    public MH(String ma, String ten, String dv, long gm, long gb){
        this.ma = ma;
        this.ten = ten;
        this.dv = dv;
        this.gm = gm;
        this.gb = gb;
    }
    public long getLoinhuan(){
        return gb - gm;
    }
    @Override
    public int compareTo(MH a) {
        long loiNhuan1 = this.getLoinhuan();
        long loiNhuan2 = a.getLoinhuan();
        if (loiNhuan1 != loiNhuan2) {
            return Long.compare(loiNhuan2, loiNhuan1);
        }
        return this.ma.compareTo(a.ma); 
    }

    public String toString(){
        return String.format("%s %s %s %d %d %d", ma, ten, dv, gm, gb, getLoinhuan());
    }
}
public class J05081 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        MH [] arr = new MH[n];
        for(int i = 0; i < n; i++){
            String s = "MH";
            String tmp = String.valueOf(i + 1);
            if(i < 9){
                s = s + "00" + tmp;
            }
            else{
                s = s + "0" + tmp;
            }
            sc.nextLine();
            String a = sc.nextLine();
            String b = sc.next();
            long x = sc.nextLong();
            long y = sc.nextLong();
            arr[i] = new MH(s, a, b, x, y);
        }
        Arrays.sort(arr);
        for(int i = 0; i < n; i++){
            System.out.println(arr[i]);
        }
    }
}
