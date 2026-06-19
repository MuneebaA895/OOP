public class Circle {
    private double radius;

    // default constructor
    public Circle() {
        radius = 1.0;
    }
    
    // Parameterized constructor
    public Circle(double r) {
        radius = r;
    }

    public double getArea() {
        return Math.PI * radius * radius;
    }

    public double getPerimeter() {
        return 2 * Math.PI * radius;
    }

    public void setRadius(double r) {
        radius = r;
    }  
}


