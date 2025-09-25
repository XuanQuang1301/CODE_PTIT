import java.util.Scanner;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.TreeSet;
import java.util.Set;
import java.io.File;

class WordSet{
    
    private Set<String> set;
    public WordSet(String filename) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("VANBAN.in"));
        set = new TreeSet<> ();
        while(sc.hasNext()){
            set.add(sc.next().toLowerCase());
        }
    }
    public String toString(){
        String s = "";
        for(String i : set){
            s += i + "\n";
        }
        return s;
    }
}
public class J07007_Lietketukhacnhau {
    public static void main(String [] args) throws IOException{
        WordSet ans = new WordSet("VANBAN.in");
        System.out.println(ans);
    }
}
