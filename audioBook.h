#include "libraries.h"
#include "book.h"

class audioBook : public book
{
private:
    string voiceActor;
public:
        audioBook(string Title, string Author, string VoiceActor) {     // Constructor of audiobook
        title = Title;
        authorName = Author;
        voiceActor = VoiceActor;
    };

    void SetVoiceActor(string VoiceActor);
    string GetVoiceActor();
    void printDescription();
};

