public class TestTree {
    public static void main(String[] args) {

        Tree t1 = new Tree("Mango");
        Tree t2 = new Tree("Neem");
        Tree t3 = new Tree("Pine");

        System.out.println("Tree 1: " + t1.Treetype);
        System.out.println("Tree 2: " + t2.Treetype);
        System.out.println("Tree 3: " + t3.Treetype);
        
        System.out.println("Number of Trees: " + Tree.numberOfTrees);
        System.out.println("Total Trees: " + Tree.getNumberOfTrees());
    }
}

