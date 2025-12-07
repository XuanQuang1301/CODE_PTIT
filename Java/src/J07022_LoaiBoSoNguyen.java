import java.util.*; 
import java.io.*; 

public class J07022_LoaiBoSoNguyen {
    public static void main(String[] args)throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        List<String> words = new ArrayList<>();

        while (sc.hasNext()) {
            String token = sc.next();
            if (isInteger(token)) continue; // bỏ số nguyên int
            words.add(token);
        }
        sc.close();
        PrintWriter out = new PrintWriter(new File("DN.txt")); 
        Collections.sort(words);
        for (String w : words){
            out.println(w + " ");
            System.out.print(w + " ");
        }
        out.close();
    }

    private static boolean isInteger(String s) {
        // kiểm tra xem có phải toàn là số không
        if (!s.matches("-?\\d+")) return false;
        try {
            Integer.parseInt(s); // nếu parse được -> là int
            return true;
        } catch (NumberFormatException e) {
            return false; // số quá lớn -> không phải int
        }
    }
}
