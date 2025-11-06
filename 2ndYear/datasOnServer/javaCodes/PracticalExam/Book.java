class Book {
    int id;
    String name;
    double price;

    Book() {
        id = 0;
        name = "Unknown";
        price = 0.0;
    }

    Book(int id, String name) {
        this.id = id;
        this.name = name;
        this.price = 0.0;
    }

    Book(int id, String name, double price) {
        this.id = id;
        this.name = name;
        this.price = price;
    }

    void printDetails() {
        System.out.println("Book ID: " + id);
        System.out.println("Book Name: " + name);
        System.out.println("Book Price: $" + price);
        System.out.println("-----------------------------");
    }

    public static void main(String[] args) {
        Book b1 = new Book();
        b1.printDetails();

        Book b2 = new Book(102, "The Alchemist");
        b2.printDetails();

        Book b3 = new Book(103, "Clean Code", 45.99);
        b3.printDetails();
    }
}
