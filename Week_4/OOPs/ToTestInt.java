package Week_4.OOPs;

// Interface declaration
interface test {
    int square(int num); // Member function [cite: 225]
}

// Concrete class implementing the interface 
class arithmetic implements test {
    @Override
    public int square(int num) {
        return num * num;
    }
}

// Execution Driver Class 
public class ToTestInt {
    public static void main(String[] args) {
        arithmetic obj = new arithmetic(); // Utilizing object of arithmetic 
        int value = 5;
        System.out.println("Square of " + value + " is: " + obj.square(value));
    }
}