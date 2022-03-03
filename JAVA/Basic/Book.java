//package disigningClasses;

class Author {
    String name, place;
    int age;
    public Author(String name, int age, String place) {
        this.name = name;
        this.age = age;
        this.place = place;
    }

}

public class Book {

        String name;
        int price;
        Author author;
        public Book(String name, int price, Author author) {
            this.name = name;
            this.price = price;
            this.author = author;
        }


    public static void main(String[] args) {
        Author author = new Author("naim", 19, "Kushtia");
        Book book = new Book("Java", 222, author);
        System.out.println("Book name : " + book.name);
        System.out.println("Price : " + book.price);
        System.out.println("---------Author's Information----------");
        System.out.println("Name : " + book.author.name);
        System.out.println("Age : " + book.author.age);
        System.out.println("Address : " + book.author.place);
    }

}
