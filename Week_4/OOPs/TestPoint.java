package Week_4.OOPs;

class Point {
    private int x, y; // Instance variables [cite: 229]

    // Default Constructor [cite: 230]
    public Point() {
        this.x = 0;
        this.y = 0;
    }

    // Parameterized Constructor [cite: 231]
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    // Setter Methods [cite: 232]
    public void setX(int x) { this.x = x; }
    public void setY(int y) { this.y = y; }
    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void display() {
        System.out.println("Point Coordinates: (" + x + ", " + y + ")");
    }
}

public class TestPoint {
    public static void main(String[] args) {
        Point p1 = new Point();
        Point p2 = new Point(10, 20);
        
        p1.setXY(5, 7);
        p1.display();
        p2.display();
    }
}