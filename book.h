#include "libraries.h"

class book
{
protected:
    string title;
    string authorName;
public:
    book(string Title, string Author);
    void SetTitle(string Title);
    void SetAuthor(string Author);
    string GetTitle();
    string GetAuthor();
    void printDescription();
};

