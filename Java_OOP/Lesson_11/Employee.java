public class Employee {
    // Public variables to store employee information
    public String EmpName;
    public int EmpAge;
    public String EmpDept;

    // Private variable to store employee salary
    private int EmpSalary;

    // Constructor to initialize employee information
    public Employee(String empName, int empAge, String empDept, int empSalary) {
        EmpName = empName;
        EmpAge = empAge;
        EmpDept = empDept;
        EmpSalary = empSalary;
    }

    // Public method to display employee information
    public void DisplayEmployeeInfo() {
        System.out.println("Employee Name: " + EmpName);
        System.out.println("Employee Age: " + EmpAge);
        System.out.println("Employee Department: " + EmpDept);
        System.out.println("Employee Salary: " + EmpSalary);
    } 
}


