#include "libraries.h"
#include "book.h"
#include "audioBook.h"

int main() {
    audioBook audioBook1; // To store user inputs for audiobook
    string audioBookTitle;
    string audioBookAuthor;
    string audioBookVoiceActor;

    cout << "Enter title of Audio book: " << endl;
    cin >> audioBookTitle;
    audioBook1.SetTitle(audioBookTitle);

    cout << "Enter Author name of Audio book: " << endl;
    cin >> audioBookAuthor;
    audioBook1.SetTitle(audioBookAuthor);

    cout << "Enter Voice Actor of Audio Book: " << endl;
    cin >> audioBookVoiceActor;
    audioBook1.SetTitle(audioBookVoiceActor);


};