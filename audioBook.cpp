#include "libraries.h"
#include "audioBook.h"
#include "book.h"

void audioBook::SetVoiceActor(string VoiceActor) {      // Setter for audiobook
    voiceActor = VoiceActor;
};

string audioBook::GetVoiceActor() {     // Getter for audiobook
    return voiceActor;
};

void audioBook::printDescription() {
    cout << "Book title is " << title << endl;
    cout << "Book author is " << authorName << endl;
    cout << "Voice actor name is " << voiceActor << endl;
}