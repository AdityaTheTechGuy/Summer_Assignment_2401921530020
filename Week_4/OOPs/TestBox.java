package Week_4.OOPs;

class box {
    protected double length, breadth; // Base instance variables [cite: 237]

    public box(double length, double breadth) { // Base Constructor [cite: 235]
        this.length = length;
        this.breadth = breadth;
    }

    public double findArea() { // Area computation [cite: 236]
        return length * breadth;
    }
}

// Subclass extending base box properties 
class box3d extends box {
    private double height; // Subclass variable [cite: 237]

    public box3d(double length, double breadth, double height) {
        super(length, breadth); // Pull base requirements [cite: 234, 235]
        this.height = height;
    }

    public double findVolume() { // Volume computation [cite: 236]
        return length * breadth * height;
    }
}

public class TestBox {
    public static void main(String[] args) {
        box3d container = new box3d(10.5, 5.0, 4.0); // Set structural metrics [cite: 236]
        System.out.println("Base Area: " + container.findArea());
        System.out.println("Container Volume: " + container.findVolume());
    }
}