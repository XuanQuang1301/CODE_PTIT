import java.util.*; 
import java.io.*; 

public class J07016_SoNguyenToTrongHaiFileNhiPhan {
    static boolean Nto(Integer n){
        if(n < 2) return false;
        for(int i = 2;i <= Math.sqrt(n);i++){
            if(n % i == 0) return false;
        }
        return true; 
    }
    public static void main(String[] args)throws IOException, ClassNotFoundException {
        ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in")); 
        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList <Integer> data1 = (ArrayList<Integer>) ois1.readObject(); 
        ArrayList <Integer> data2 = (ArrayList<Integer>) ois2.readObject(); 
        int a[] = new int[10000], b[] = new int[10000]; 
        for(int i = 0; i < data1.size(); i++){
            if(Nto(data1.get(i))){
                a[data1.get(i)]++; 
            }
        }
        TreeSet<Integer> res = new TreeSet<>(); 
        for(int i = 0; i < data2.size(); i++){
            if(a[data2.get(i)] > 0){
                res.add(data2.get(i)); 
                b[data2.get(i)]++; 
            }
        }
        for(Integer i : res){
            System.out.println(i + " " + a[i] + " " + b[i]);
        }
    }
}
