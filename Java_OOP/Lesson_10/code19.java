public class code19 {

    // Method 1: returns sum of two numbers
    static int add(int a, int b) {
        return a + b;
    }

    // Method 2: returns square of a number
    static int square(int x) {
        return x * x;
    }

    public static void main(String[] args) {
        int result1 = add(5, 3);
        int result2 = square(4);

        System.out.println("Sum: " + result1);
        System.out.println("Square: " + result2);
    }
}

