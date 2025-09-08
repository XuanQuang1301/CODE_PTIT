/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import static java.lang.Math.*;
import java.util.Scanner;
class Point{
    private double x;
    private double y;
    public Point(){
        x = 0;
        y = 0;
    }
    public Point(double x, double y){
        this.x = x;
        this.y = y;
    }
    public Point(Point a){
        this.x = a.x;
        this.y = a.y;
    }
    public double getX(){
        return x;
    }
    public double getY(){
        return y;
    }
    public double distance(Point p){
        return sqrt(pow(this.x - p.x, 2) + pow(this.y - p.y, 2));
    }
    public double distance(Point a, Point b){
        return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    }
    public String toString(){
        return x + " " + y;
    }
}
public class J04001 {
    public static void main(String [ ]args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            double x = sc.nextDouble();
            double y = sc.nextDouble();
            Point a = new Point(x, y);
            double z = sc.nextDouble();
            double h = sc.nextDouble();
            Point b = new Point(z, h);
            System.out.printf("%.4f\n", a.distance(b));
        }
    }
}
