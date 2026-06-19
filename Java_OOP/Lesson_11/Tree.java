public class Tree {

    public String Treetype;
    public static int numberOfTrees = 0;

    // Parameterized constructor
    Tree(String treeName) {
        Treetype = treeName;
        numberOfTrees++;
    }

    static int getNumberOfTrees() {
        return numberOfTrees;
    }
}




