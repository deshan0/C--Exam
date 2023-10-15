#include "libraries.h"
#include "book.h"

book::book(string Title, string Author) {      // constructor for book
    title = Title;
    authorName = Author;
};

void book::SetTitle(string Title) {        // Setter for title
    title = Title;
};

void book::SetAuthor(string Author) {        // Setter for author
    authorName = Author;
}

string book::GetTitle() {       // Getter for title
    return title;
};

string book::GetAuthor() {      // Getter for Author
    return authorName;
};

void book::printDescription() {
    cout << "Book Title is " << title << endl;
    cout << "Book Aauthor is " << authorName << endl;
}