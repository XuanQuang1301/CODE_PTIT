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
class Time implements Comparable<Time>{
    private int gio;
    private int phut;
    private int giay;
    public Time(){
        
    }
    public Time(int gio, int phut, int giay){
        this.gio = gio;
        this.phut = phut;
        this.giay = giay;
    }
    public String toString(){
        return gio + " " + phut + " " + giay;
    }
    public int compareTo(Time other) {
        if (this.gio != other.gio) {
            return this.gio - other.gio;
        } else if (this.phut != other.phut) {
            return this.phut - other.phut;
        } else {
            return this.giay - other.giay;
        }
    }
}
public class J05033 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Time [] arr = new Time[n];
        for(int i = 0; i < n; i++){
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();
            arr[i] = new Time(x, y, z);
        }
        Arrays.sort(arr);
        for(int i = 0; i < n; i++){
            System.out.println(arr[i]);
        }
    }
}
