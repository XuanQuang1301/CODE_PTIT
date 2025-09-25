import java.io.File;
import java.util.Scanner;
import java.io.FileNotFoundException;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;

public class J07008_Daycontangdan {
    static int [] a;
    static int [] x;
    static int n;
    static List<String> ans;
    public static boolean isIncreasing(List<Integer> b){
        String s = "" + b.get(0) + " ";
        for(int i = 1; i < b.size(); i++){
            if(b.get(i) <= b.get(i - 1)){
                return false;
            }
            s += b.get(i) + " ";
        }
        ans.add(s);
        return true;
    }
    public static void backtrack(int i){
        if(i > n){
            List<Integer> b = new ArrayList<>();
            for(int j = 1; j <= n; j++){
                if(x[j] == 1){
                    b.add(a[j]);
                }
            }
            if(b.size() >= 2 ){
                isIncreasing(b);
            }
            return;
        }
        x[i] = 0;
        backtrack(i + 1);
        x[i] = 1;
        backtrack(i + 1);
    }
    public static void main(String [] args)throws FileNotFoundException{
        Scanner sc = new Scanner(new File("DAYSO.in"));
        n = sc.nextInt();
        a = new int [n + 1];
        x = new int [n + 1];
        ans = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            a[i] = sc.nextInt();
        }
        backtrack(1);
        Collections.sort(ans);
        for(int i = 0; i < ans.size(); i++){
            System.out.println(ans.get(i));
        }
    }
}
