// Importing the Scanner class to read user input
import java.util.Scanner;

public class code6 {
    public static void main(String[] args) {

        // Creating a Scanner object to read input from the user
        Scanner input = new Scanner(System.in);

        // Prompting the user to enter name
        System.out.println("Enter your name:");
        // Taking the name input from the user
        String name = input.nextLine();
        System.out.println("Hello, " + name + "!");

        // Prompting the user to enter age
        System.out.println("Enter your age:");
        // Taking the age input from the user
        int age = input.nextInt();
        System.out.println("You are " + age + " years old.");

        // Closing the Scanner object to prevent memory leaks
        input.close();
    } 
}

