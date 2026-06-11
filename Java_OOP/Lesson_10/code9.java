public class code9 {
    public static void main(String[] args) {

        int marks = 17;

        if (marks >= 0 && marks <= 5) {
            System.out.println("Grade F (0-5)");
        }
        else if (marks >= 6 && marks <= 10) {
            System.out.println("Grade D (6-10)");
        }
        else if (marks >= 11 && marks <= 15) {
            System.out.println("Grade C (11-15)");
        }
        else if (marks >= 16 && marks <= 18) {
            System.out.println("Grade B (16-18)");
        }
        else if (marks >= 19 && marks <= 20) {
            System.out.println("Grade A (19-20)");
        }
        else {
            System.out.println("Invalid marks (enter 0-20)");
        }
    }
}
