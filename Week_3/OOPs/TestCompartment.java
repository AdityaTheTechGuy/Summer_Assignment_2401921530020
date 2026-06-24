package Week3.OOPs;

import java.util.Random;

abstract class Compartment {
    public abstract String notice(); 
}

class FirstClass extends Compartment {
    @Override
    public String notice() { return "First Class Notice: Premium luxury coach. Valid ticket required."; }
}

class Ladies extends Compartment {
    @Override
    public String notice() { return "Ladies Notice: Strictly reserved for female passengers."; }
}

class General extends Compartment {
    @Override
    public String notice() { return "General Notice: Unreserved coach. Open seating configuration."; }
}

class Luggage extends Compartment {
    @Override
    public String notice() { return "Luggage Notice: Heavy parcel transport zone. Passengers prohibited."; }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] train = new Compartment[10];
        Random random = new Random();
        for (int i = 0; i < train.length; i++) {
            int coachType = random.nextInt(4) + 1;
            switch (coachType) {
                case 1: train[i] = new FirstClass(); break;
                case 2: train[i] = new Ladies(); break;
                case 3: train[i] = new General(); break;
                case 4: train[i] = new Luggage(); break;
            }
            System.out.println("Position [" + i + "] -> " + train[i].notice());
        }
    }
}
