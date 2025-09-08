/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.Scanner;
import static java.lang.Math.*;

class Rectange{
    private double w;
    private double h;
    private String color;
    
    public Rectange(){
        w = 0;
        h = 0;
    }
    public Rectange(double w, double h, String color){
        this.w = w;
        this.h = h;
        this.color = color;
    }
    public void setWidth(double x){
        w = x;
    }
    public double getWidth(){
        return w;
    }
    public double getHeight(){
        return h;
    }
    public void setHeight(double x){
        h = x;
    }
    public String getColor(){
        return color.substring(0, 1).toUpperCase() + color.substring(1).toLowerCase();
    }
    public void setColor(String a){
        color = a;
    }
    public double findArea(){
        return w * h;
    }
    public double findPerimeter(){
        return (w + h) * 2;
    }
    public String toString(){
        return String.format("%d %d %s", (int) findPerimeter(), (int) findArea(), getColor());
    }
}
public class J04002 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        double x = sc.nextDouble();
        double y = sc.nextDouble();
        String c = sc.next();
        if(x > 0 && y > 0){
            Rectange ans = new Rectange(x, y, c);
            System.out.println(ans);
        }
        else{
            System.out.println("INVALID");
        }
    }
}
