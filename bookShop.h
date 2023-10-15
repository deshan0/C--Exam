#include "libraries.h"

class bookShop
{
private:
    string* bookCollection = new string;
    int noOfBooks;
public:
    bookShop(string Collection);
    void addBook(string Book);
};


