public class CircleWithStaticMembers {

    // The radius of the circle
    double radius;

    // The number of objects created
    static int numberOfObjects = 0;

    // Default constructor
    CircleWithStaticMembers() {
        radius = 1;
        numberOfObjects++;
    }

    // Parameterized constructor
    CircleWithStaticMembers(double newRadius) {
        radius = newRadius;
        numberOfObjects++;
    }

    // Return number of objects
    static int getNumberOfObjects() {
        return numberOfObjects;
    }

    // Return the area of this circle
    double getArea() {
        return radius * radius * Math.PI;
    }
}
