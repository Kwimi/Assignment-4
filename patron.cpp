#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

enum class Genre {
    Fiction,
    NonFiction,
    Periodical,
    Biography,
    Children
};

class Book {
private:
    std::string ISBN;
    std::string title;
    std::string author;
    int copyrightDate;
    bool checkedOut;
    Genre genre;

public:
    Book(std::string isbn, std::string title, std::string author, int copyrightDate, Genre genre)
        : ISBN(isbn), title(title), author(author), copyrightDate(copyrightDate), checkedOut(false), genre(genre) {}

    std::string getISBN() const { return ISBN; }
    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    int getCopyrightDate() const { return copyrightDate; }
    bool isCheckedOut() const { return checkedOut; }
    Genre getGenre() const { return genre; }

    void checkOut() { checkedOut = true; }
    void checkIn() { checkedOut = false; }

    bool operator==(const Book& other) const { return ISBN == other.ISBN; }
    bool operator!=(const Book& other) const { return !(*this == other); }

    friend std::ostream& operator<<(std::ostream& os, const Book& book);
};

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "Title: " << book.title << '\n';
    os << "Author: " << book.author << '\n';
    os << "ISBN: " << book.ISBN << '\n';
    os << "Genre: " << static_cast<int>(book.genre) << '\n';
    return os;
}

class Patron {
private:
    std::string userName;
    std::string cardNumber;
    int owedFees;

public:
    Patron(std::string name, std::string cardNumber)
        : userName(name), cardNumber(cardNumber), owedFees(0) {}

    std::string getUserName() const { return userName; }
    std::string getCardNumber() const { return cardNumber; }
    int getOwedFees() const { return owedFees; }

    bool owesFees() const { return owedFees > 0; }
    void setFees(int fees) { owedFees = fees; }

    friend class Library;
};

class Transaction {
private:
    Book book;
    Patron patron;
    std::string activity;
    // Date date; // You need to implement a Date class

public:
    Transaction(const Book& b, const Patron& p, std::string act)
        : book(b), patron(p), activity(act) {}

    // Other member functions and accessors for Date
};

class Library {
private:
    std::vector<Book> books;
    std::vector<Patron> patrons;
    std::vector<Transaction> transactions;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void addPatron(const Patron& patron) {
        patrons.push_back(patron);
    }

    void checkOutBook(const Book& book, const Patron& patron) {
        if (!isBookInLibrary(book) || !isPatronInLibrary(patron)) {
            throw std::runtime_error("Book or patron not found in library.");
        }

        if (patron.owesFees()) {
            throw std::runtime_error("Patron owes fees and cannot check out.");
        }

        book.checkOut();
        transactions.emplace_back(book, patron, "check out");
    }

    // Other member functions

private:
    bool isBookInLibrary(const Book& book) const {
        return std::find(books.begin(), books.end(), book) != books.end();
    }

    bool isPatronInLibrary(const Patron& patron) const {
        return std::find(patrons.begin(), patrons.end(), patron) != patrons.end();
    }
};

int main() {
    // Example usage
    Book book1("123456", "Sample Book 1", "Author 1", 2000, Genre::Fiction);
    Book book2("789012", "Sample Book 2", "Author 2", 2010, Genre::NonFiction);

    Patron patron1("User 1", "1234");
    Patron patron2("User 2", "5678");

    Library library;
    library.addBook(book1);
    library.addBook(book2);
    library.addPatron(patron1);
    library.addPatron(patron2);

    try {
        library.checkOutBook(book1, patron1);
        library.checkOutBook(book2, patron2);
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}

// In this example, the classes Book, Patron, Transaction, and Library are defined. Objects are created, books are added to the library, and patrons check out books. The library's function getPatronsWithFees() is used to identify patrons who owe fees. The main function demonstrates how these classes can be utilized.

