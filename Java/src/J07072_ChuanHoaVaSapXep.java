import java.util.*;
import java.io.*;

public class J07072_ChuanHoaVaSapXep {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DANHSACH.in"));
        List<String> list = new ArrayList<>();

        // Đọc đến hết file
        while (sc.hasNextLine()) {
            String line = sc.nextLine().trim();
            if (!line.isEmpty()) list.add(standardize(line));
        }

        // Sắp xếp theo tên → họ → đệm
        Collections.sort(list, new Comparator<String>() {
            @Override
            public int compare(String a, String b) {
                String[] pa = a.split(" ");
                String[] pb = b.split(" ");

                String tenA = pa[pa.length - 1];
                String tenB = pb[pb.length - 1];
                if (!tenA.equals(tenB))
                    return tenA.compareTo(tenB);

                String hoA = pa[0];
                String hoB = pb[0];
                if (!hoA.equals(hoB))
                    return hoA.compareTo(hoB);

                // So sánh tên đệm (phần giữa)
                String demA = middleName(pa);
                String demB = middleName(pb);
                return demA.compareTo(demB);
            }
        });

        // In kết quả
        for (String s : list)
            System.out.println(s);
    }

    // Hàm chuẩn hóa tên
    private static String standardize(String s) {
        s = s.trim().toLowerCase().replaceAll("\\s+", " ");
        String[] parts = s.split(" ");
        StringBuilder res = new StringBuilder();
        for (int i = 0; i < parts.length; i++) {
            if (parts[i].length() == 0) continue;
            res.append(Character.toUpperCase(parts[i].charAt(0)));
            if (parts[i].length() > 1)
                res.append(parts[i].substring(1));
            if (i < parts.length - 1)
                res.append(" ");
        }
        return res.toString();
    }

    // Lấy phần tên đệm (giữa họ và tên)
    private static String middleName(String[] parts) {
        if (parts.length <= 2) return ""; // chỉ có họ + tên
        StringBuilder sb = new StringBuilder();
        for (int i = 1; i < parts.length - 1; i++) {
            sb.append(parts[i]);
            if (i < parts.length - 2) sb.append(" ");
        }
        return sb.toString();
    }
}
