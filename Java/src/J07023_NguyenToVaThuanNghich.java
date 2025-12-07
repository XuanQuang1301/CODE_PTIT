import java.util.*; 
import java.io.*; 
public class J07023_NguyenToVaThuanNghich {
    static boolean Nto(Integer n){
        if(n < 2) return false; 
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true; 
    }
    static boolean Tn(Integer n){
        String s = String.valueOf(n); 
        String tmp = new StringBuilder(s).reverse().toString(); 
        return (s.equals(tmp) ? true : false); 
    }
    public static void main(String[] args)throws ClassNotFoundException, IOException{
        ObjectInputStream os1 = new ObjectInputStream(new FileInputStream("DATA1.in")); 
        ObjectInputStream os2 = new ObjectInputStream(new FileInputStream("DATA2.in")); 
        ArrayList<Integer> arr1 = (ArrayList<Integer>) os1.readObject(); 
        ArrayList<Integer> arr2 = (ArrayList<Integer>) os2.readObject(); 
        int a[] = new int[10000], b[] = new int[10000]; 
        for(int i = 0; i < arr1.size(); i++){
            if(Nto(arr1.get(i)) && Tn(arr1.get(i))){
                a[arr1.get(i)]++; 
            }
        }
        TreeSet<Integer> arr = new TreeSet<>(); 
        for(int i = 0; i < arr2.size(); i++){
            if(a[arr2.get(i)] > 0){
                b[arr2.get(i)]++;
                arr.add(arr2.get(i)); 
            }
        }
        for(Integer i : arr){
            System.out.println(i + " " + a[i] + " " + b[i]);
        }
    }
}
