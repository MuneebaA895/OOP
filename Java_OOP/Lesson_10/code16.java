import java.util.Scanner;

public class code16 {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);

        // Dynamic array size based on user input
        System.out.print("Enter array size: ");
        int size = input.nextInt();

        int[] arr = new int[size];  // dynamic size from user

        System.out.println("Enter " + size + " elements:");
        //Taking input for array elements
        for (int i = 0; i < size; i++) {
            arr[i] = input.nextInt();
        }
        // Displaying the array elements
        System.out.println("Array elements are:");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
        input.close();
    }
}

