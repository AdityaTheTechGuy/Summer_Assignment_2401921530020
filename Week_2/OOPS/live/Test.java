package live;  

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        
        System.out.println("--- Part A ---");
        
        Veena v = new Veena();
        v.play();

        System.out.println("\n--- Part B ---");
        
        Saxophone s = new Saxophone();
        s.play();

        System.out.println("\n--- Part C (Polymorphism) ---");
         
        Playable p;

        p = v; 
        p.play();

        p = s; 
        p.play();
    }
}