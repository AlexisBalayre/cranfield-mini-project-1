#include "Publication.h"
#include <iostream>
#include <string>

using namespace std;

class Book : public Publication {
    private:
        string author;
        string ISBN;
        string publisher;
    public:
        Book();
        Book(string, string, unsigned int, string, string, string);
        void setAuthor(string);
        void setISBN(string);
        void setPublisher(string);
        string getAuthor();
        string getISBN();
        string getPublisher();
        void display();
};