#include "libraries.h"
#include "bookShop.h"

bookShop::bookShop(string Collection) {     // Constructor 
    bookCollection = Collection;
    noOfBooks +=1;
}

bookShop::~bookShop() {     // Destructor
    delete bookCollection;
}

void bookShop::addBook(string Book) {

}