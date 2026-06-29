package Week_4.OOPs;

class Outer {
    void display() {
        System.out.println("Display from Outer Class.");
    }

    // Inner Class definition 
    class Inner {
        void display() {
            System.out.println("Display from Inner Class.");
        }
    }
}

public class MainClass {
    public static void main(String[] args) {
        Outer outerObj = new Outer();
        outerObj.display(); // Call outer function 

        // Instantiating inner class via outer object reference 
        Outer.Inner innerObj = outerObj.new Inner();
        innerObj.display(); // Call inner function 
    }
}