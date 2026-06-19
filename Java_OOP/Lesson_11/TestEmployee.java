public class TestEmployee {
    public static void main(String[] args) {
        // Create an instance of the Employee class
        Employee emp1 = new Employee("John Doe", 30, "IT", 50000);

        // Acess public variables directly
        System.out.println("Accessing public variables directly:");
        System.out.println("Employee Name: " + emp1.EmpName);
        System.out.println("Employee Age: " + emp1.EmpAge);
        System.out.println("Employee Department: " + emp1.EmpDept);

        // Attempting to access private variable (will cause an error)
        // System.out.println("Employee Salary: " + emp1.EmpSalary); // Error

        // calling the public method to display employee information
        System.out.println("\nDisplaying employee information using public method:");
        emp1.DisplayEmployeeInfo();
    }  
}



