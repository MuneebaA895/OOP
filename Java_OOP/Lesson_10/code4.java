public class code4 {
   public static void main(String[] args) {
    // Arithmetic operations
    int a = 10;
    int b = 5;
    System.out.println("Arithmetic operations:");
    System.out.println("a + b = " + (a + b)); // Output: a + b = 15
    System.out.println("a - b = " + (a - b)); // Output: a - b = 5
    System.out.println("a * b = " + (a * b)); // Output: a * b = 50
    System.out.println("a / b = " + (a / b)); // Output: a / b = 2
    System.out.println("a % b = " + (a % b)); // Output: a % b = 0
    System.out.println("a++ = " + (a++)); // Output: a++ = 10 (a becomes 11 after this line)
    System.out.println("b-- = " + (b--)); // Output: b-- = 5 (b becomes 4 after this line)

    System.out.println("..............................");
    System.out.println("Dividing two integers results in an integer:");
    int c = 7;
    int d = 3;
    System.out.println("c / d = " + (c / d)); // Output: c / d = 2 (integer division)
    System.out.println("To get a floating-point result, at least one operand must be a floating-point number:");
    System.out.println("c / (double) d = " + (c / (double) d)); // Output: c / (double) d = 2.3333333333333335
   }  
}
