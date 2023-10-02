#include "Journal.h"

#include <iostream>

using namespace std;

// Default constructor
Journal::Journal() : Publication() {
    date = "";
    editor = "";
}

// Overloaded constructor
Journal::Journal(string m, string t, unsigned int r, string d, string e) : Publication(m, t, r) {
    date = d;
    editor = e;
}

// Setter for date
void Journal::setDate(string d) {
    date = d;
}

// Setter for editor
void Journal::setEditor(string e) {
    editor = e;
}

// Getter for date
string Journal::getDate() {
    return date;
}

// Getter for editor
string Journal::getEditor() {
    return editor;
}

// Display method
void Journal::display() {
    Publication::display();
    cout << "Date: " << date << endl;
    cout << "Editor: " << editor << endl;
}