import java.io.*; 
import java.util.*; 
class WordSet {
    private ArrayList<String> solve = new ArrayList<>(); 
    public WordSet(String file)throws FileNotFoundException{
        Scanner sc = new Scanner(new File(file)); 
        while(sc.hasNext()){
            this.solve.add(sc.next().toLowerCase()); 
        }
    }
    public String union(WordSet q){
        ArrayList<String> init = new ArrayList<>(solve);
        init.addAll(q.solve); 
        TreeSet<String> ans = new TreeSet<>(init); 
        String tmp = ""; 
        for(String i : ans){
            tmp += i + " ";
        }
        return tmp; 
    }
    public String intersection(WordSet q){
        ArrayList<String> init = new ArrayList<>(solve);
        init.retainAll(q.solve); 
        TreeSet<String> ans = new TreeSet<>(init); 
        String tmp = ""; 
        for(String i : ans){
            tmp += i + " ";
        }
        return tmp; 
    }
}
public class J07014_HopVaGiaoCuaHaiFileVanBan {
    public static void main(String[] args) throws IOException {
        WordSet s1 = new WordSet("DATA1.in"); 
        WordSet s2 = new WordSet("DATA2.in"); 
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
}
