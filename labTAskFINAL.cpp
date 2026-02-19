#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string bookID;
    string returnDate;
};
class LibraryReturnSystem {
private:
    static const int MAX_BOOKS = 100;
    Book returnedBooks[MAX_BOOKS];
    int bookCount = 0;

public:
    void addReturnedBook(const Book& book) {
    if (book.title.find("Damaged") != string::npos) {
        cout << "Cannot add book...It is damaged." << endl;
        return;
    }

    if (bookCount >= MAX_BOOKS) {
        cout << "Cannot add book....Book list is full." << endl;
        return;
    }

    returnedBooks[bookCount++] = book;
    cout << "Book added successfully." << endl;
}



    void searchBooks(const string& title) {
        cout << "Books found with title '" << title << "':" << endl;
        bool found = false;
        for (int i = 0; i < bookCount; ++i) {
            if (returnedBooks[i].title == title) {
                cout << "Title: " << returnedBooks[i].title
                     << ", ID: " << returnedBooks[i].bookID
                     << ", Return Date: " << returnedBooks[i].returnDate << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No books found with the given title." << endl;
        }
    }


    void displayAllBooks() {
        cout << "Returned Books:" << endl;
        if (bookCount == 0) {
            cout << "No books to display." << endl;
        }
        for (int i = 0; i < bookCount; ++i) {
            cout << "Title: " << returnedBooks[i].title
                 << ", ID: " << returnedBooks[i].bookID
                 << ", Return Date: " << returnedBooks[i].returnDate << endl;
        }
    }
};

int main() {
    LibraryReturnSystem library;
    Book book1 = {"The Great Wall", "001", "2023-10-01"};
    Book book2 = {"Damaged Book Title", "002", "2023-10-02"};
    Book book3 = {"1984", "003", "2023-10-03"};


    library.addReturnedBook(book1);
    library.addReturnedBook(book2);
    library.addReturnedBook(book3);


    library.searchBooks("1984");

    library.displayAllBooks();

    return 0;
}

