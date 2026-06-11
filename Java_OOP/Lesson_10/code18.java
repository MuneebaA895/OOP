public class code18 {

    // Creating two overloaded Add methods in java
    // Method 1: Add two integers
    static void Add(int a, int b) {
        int sum = a + b;
        System.out.println("The sum of two integers is: " + sum);
    }

    // Method 2: Add three integers
    static void Add(int a, int b, int c) {
        int sum = a + b + c;
        System.out.println("The sum of three integers is: " + sum);
    }  

    public static void main(String[] args) {
        // Calling the Add method 1 with two parameters
        Add(5, 10);

        // Calling the Add method 2 with three parameters
        Add(5, 10, 15);  
    }
}
