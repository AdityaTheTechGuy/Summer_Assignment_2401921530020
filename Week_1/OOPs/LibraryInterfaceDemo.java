interface LibraryUser {
    void registerAccount();
    void requestBook();
}

class KidUser implements LibraryUser {
    private int age;
    private String bookType;

    public KidUser(int age, String bookType) {
        this.age = age;
        this.bookType = bookType;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setBookType(String bookType) {
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {
        if (age < 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equalsIgnoreCase("Kids")) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUser implements LibraryUser {
    private int age;
    private String bookType;    

    public AdultUser(int age, String bookType) {
        this.age = age;
        this.bookType = bookType;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setBookType(String bookType) {
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {
        if (age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        } else {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equalsIgnoreCase("Fiction")) {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Oops, you are allowed to take only adult fiction books");
        }
    }
}

public class LibraryInterfaceDemo {
    public static void main(String[] args) {

        System.out.println("Kid User:\n");
        // Test Case 1
        KidUser kid = new KidUser(10, "Kids");
        kid.registerAccount();
        
        kid.setAge(18);
        kid.registerAccount();
        
        kid.setBookType("Kids");
        kid.requestBook();
        
        kid.setBookType("Fiction");
        kid.requestBook();

        System.out.println("\nAdult User:");
        // Test Case 2
        AdultUser adult = new AdultUser(5, "Kids");
        adult.registerAccount();
        
        adult.setAge(23);
        adult.registerAccount();
        
        adult.setBookType("Kids");
        adult.requestBook();
        
        adult.setBookType("Fiction");
        adult.requestBook();
    }
}