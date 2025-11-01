import java.util.*; 
import java.io.*; 
import java.text.*; 
public class J07052_DanhSachTrungTuyen {
    public static void main(String[] args)throws FileNotFoundException{
        Scanner sc = new Scanner(new File("THISINH.in")); 
        int t = Integer.parseInt(sc.nextLine()); 
        List<Student> students = new ArrayList<>(); 
        while(t-- > 0){
            students.add(new Student(sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()))); 
        }
        Collections.sort(students);
        int n = Integer.parseInt(sc.nextLine()); 
        double mark = students.get(n - 1).sumScore(); 
        for(Student student : students){
            if(student.sumScore() >= mark){
                student.setStatus("TRUNG TUYEN");
            }else{
                student.setStatus("TRUOT");
            }
        }
        System.out.println(String.format("%.1f", mark));
        for(Student student : students){
            System.out.println(student);
        }
    }
}
class Student implements Comparable<Student> {
    private String ma, ten; 
    private double toan, li, hoa; 
    private String status; 

    public Student(String ma, String ten, double toan, double li, double hoa) {
        this.ma = ma;
        this.ten = ten;
        this.toan = toan;
        this.li = li;
        this.hoa = hoa;
    }

    public String getMa() {
        return ma;
    }

    public void setMa(String ma) {
        this.ma = ma;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }
    
    public double getBouns(){
        String s = ma.substring(0, 3); 
        if(s.equals("KV1")){
            return 0.5; 
        }
        else if(s.equals("KV2")){
            return 1.0; 
        }
        else return 2.5; 
    }
    public double sumScore(){
        return toan * 2 + li + hoa + getBouns(); 
    }
    public String getTen(){
        String [] ans = ten.trim().split("\\s+"); 
        String name = "";
        for(int i = 0; i < ans.length; i++){
            name += ans[i].substring(0, 1).toUpperCase() + ans[i].substring(1).toLowerCase(); 
            if(i < ans.length - 1) name += " ";
        }
        return name; 
    }
    public static String removeZero(double number){
        DecimalFormat format = new DecimalFormat("#.#"); 
        return format.format(number); 
    }
    @Override 
    public String toString(){
        return ma + " " + getTen() + " " + removeZero(getBouns()) + " " + removeZero(sumScore()) + " " + getStatus(); 
    }
    @Override 
    public int compareTo(Student a){
        if(this.sumScore() == a.sumScore()){
            return this.getMa().compareTo(a.getMa()); 
        }
        return this.sumScore() < a.sumScore() ? 1 : -1; 
    }
}