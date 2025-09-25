import java.util.*;

class DaThuc {
    private TreeMap<Integer, Integer> terms;

    // Constructor nhận chuỗi đa thức
    public DaThuc(String s) {
        terms = new TreeMap<>(Collections.reverseOrder()); // lưu bậc giảm dần
        String[] parts = s.split("\\s+\\+\\s+"); // tách theo " + "
        for (String part : parts) {
            String[] tmp = part.split("\\*x\\^");
            int coef = Integer.parseInt(tmp[0]);
            int exp = Integer.parseInt(tmp[1]);
            terms.put(exp, terms.getOrDefault(exp, 0) + coef);
        }
    }

    // Constructor nhận sẵn TreeMap (dùng khi cộng)
    public DaThuc(TreeMap<Integer, Integer> terms) {
        this.terms = terms;
    }

    // Hàm cộng hai đa thức
    public DaThuc cong(DaThuc other) {
        TreeMap<Integer, Integer> res = new TreeMap<>(Collections.reverseOrder());
        // copy terms của this
        for (Map.Entry<Integer, Integer> e : terms.entrySet()) {
            res.put(e.getKey(), e.getValue());
        }
        // cộng terms của other
        for (Map.Entry<Integer, Integer> e : other.terms.entrySet()) {
            res.put(e.getKey(), res.getOrDefault(e.getKey(), 0) + e.getValue());
        }
        // xóa các hạng tử có hệ số = 0
        res.entrySet().removeIf(entry -> entry.getValue() == 0);
        return new DaThuc(res);
    }

    // Xuất đa thức theo đúng định dạng
    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        boolean first = true;
        for (Map.Entry<Integer, Integer> e : terms.entrySet()) {
            if (!first) sb.append(" + ");
            sb.append(e.getValue()).append("*x^").append(e.getKey());
            first = false;
        }
        return sb.toString();
    }
}

public class J05063_TongDaThuc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            DaThuc p = new DaThuc(sc.nextLine());
            DaThuc q = new DaThuc(sc.nextLine());
            DaThuc r = p.cong(q);
            System.out.println(r);
        }
    }
}
