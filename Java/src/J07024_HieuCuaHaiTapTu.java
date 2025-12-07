import java.util.*; 
import java.io.*; 
class WordSet{
    private ArrayList<String> solve = new ArrayList<>(); 
    public WordSet(String file)throws FileNotFoundException{
        Scanner sc = new Scanner(new File(file)); 
        while(sc.hasNext()){
            solve.add(sc.next().toLowerCase()); 
        }
    }
    public String difference(WordSet q){
        ArrayList<String> init = new ArrayList<>(solve); 
        init.removeAll(q.solve); 
        TreeSet<String> ans = new TreeSet<>(init); 
        String tmp = ""; 
        for(String i : ans){
            tmp += i + " ";
        }
        return tmp; 
    }
}
public class J07024_HieuCuaHaiTapTu {
    public static void main(String[] args) throws IOException {
        WordSet s1 = new WordSet("DATA1.in");
        WordSet s2 = new WordSet("DATA2.in");
        System.out.println(s1.difference(s2));
        System.out.println(s2.difference(s1));
    }
}
