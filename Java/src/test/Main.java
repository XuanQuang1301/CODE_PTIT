package test;
import java.util.*; 
import java.io.*; 

public class Main {
    public static void main(String[] args)throws IOException, ClassNotFoundException {
        ObjectInputStream o = new ObjectInputStream(new FileInputStream("DATA.in")); 
        ArrayList<Pair> arr = (ArrayList<Pair>) o.readObject();
        o.close();

        // Dùng TreeSet vừa sắp xếp đúng, vừa loại trùng
        TreeSet<Pair> set = new TreeSet<>(new Comparator<Pair>() {
            @Override
            public int compare(Pair a, Pair b) {
                if (a.getFirst() != b.getFirst()) 
                    return a.getFirst() - b.getFirst();
                return a.getSecond() - b.getSecond();
            }
        });

        for (Pair p : arr) {
            if (p.getFirst() < p.getSecond())  // chỉ lấy cặp hợp lệ
                set.add(p);                   // TreeSet tự loại trùng
        }

        for (Pair p : set)
            System.out.println(p);
    }
}
