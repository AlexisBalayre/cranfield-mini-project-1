#include "Publication.h"

#include <iostream>

using namespace std;

class Journal : public Publication {
    private:
        string date;
        string editor;
    public:
        Journal();
        Journal(string, string, unsigned int, string, string);
        void setDate(string);
        void setEditor(string);
        string getDate();
        string getEditor();
        void display();
};
