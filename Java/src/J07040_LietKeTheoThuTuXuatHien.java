/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Lenovo
 */
import java.util.*; 
import java.io.*; 

public class J07040_LietKeTheoThuTuXuatHien {
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("NHIPHAN.in"));
        List<String> list = (ArrayList<String>) ois.readObject();
        Set<String> set = new TreeSet<>();
        for (String i : list) {
            String[] words = i.trim().toLowerCase().split("\\s+");
            set.addAll(Arrays.asList(words));
        }

        Scanner sc = new Scanner(new File("VANBAN.in"));
        while (sc.hasNext()) {
            String s = sc.next().toLowerCase();
            if (set.contains(s)) {
                System.out.println(s);
                set.remove(s);
            }
        }
    }

}
