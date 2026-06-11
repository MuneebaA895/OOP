public class code3 {
    public static void main(String[] args) {
        // Automatic static casting
        int num1 = 10;
        double num2 = num1; // int is automatically cast to double
        System.out.println("Automatic static casting: int to double");
        System.out.println("num1: " + num1); // Output: num1: 10
        System.out.println("num2: " + num2); // Output: num2: 10.0

        // Automatic dynamic casting
        double num3 = 10.15d;
        int num4 = (int) num3; // double is explicitly cast to int
        System.out.println("\nAutomatic dynamic casting: double to int");
        System.out.println("num3: " + num3); // Output: num3: 10.15
        System.out.println("num4: " + num4); // Output: num4: 10  
    }
}

