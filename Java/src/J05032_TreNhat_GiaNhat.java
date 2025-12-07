import java.util.*;
import java.text.SimpleDateFormat;
import java.text.ParseException;

class Nguoi implements Comparable<Nguoi> {
    private String ten;
    private Date date;
    public Nguoi(String ten, Date date) {
        this.ten = ten;
        this.date = date;
    }

    @Override
    public String toString() {
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        return ten;
    }

    @Override
    public int compareTo(Nguoi other) {
        return this.date.compareTo(other.date);
    }
}

public class J05032_TreNhat_GiaNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        List<Nguoi> list = new ArrayList<>();
        
        // Define the expected date format
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

        while (t-- > 0) {
            String nguoi = sc.next(); // Read name (one word assumed)
            String dateStr = sc.next(); // Read date string (dd/MM/yyyy assumed)
            
            // Handle potential date parsing error
            try {
                Date parsedDate = sdf.parse(dateStr);
                Nguoi person = new Nguoi(nguoi, parsedDate);
                list.add(person);
            } catch (ParseException e) {
                // Should handle error gracefully in a real application
                // System.err.println("Invalid date format for: " + dateStr);
            }
        }
        sc.close();
        Collections.sort(list);
        if (!list.isEmpty()) {
            // Youngest person (Tre Nhat) - last element after sorting by birth date ascending
            System.out.println(list.get(list.size() - 1)); 
            // Oldest person (Gia Nhat) - first element after sorting by birth date ascending
            System.out.println(list.get(0));
        }
    }
}