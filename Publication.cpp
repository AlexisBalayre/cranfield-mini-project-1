#include "Publication.h"
#include <iostream>
#include <string>

using namespace std;

// Default Constructor
Publication::Publication() {
    mediaType = "";
    title = "";
    refNo = 0;
}

// Overloaded Constructor
Publication::Publication(string m, string t, unsigned int r) {
    mediaType = m;
    title = t;
    refNo = r;
}

// Setter for mediaType
void Publication::setMediaType(string m) {
    mediaType = m;
}

// Setter for title
void Publication::setTitle(string t) {
    title = t;
}

// Setter for refNo
void Publication::setRefNo(unsigned int r) {
    refNo = r;
}

// Getter for mediaType
string Publication::getMediaType() {
    return mediaType;
}

// Getter for title
string Publication::getTitle() {
    return title;
}

// Getter for refNo
unsigned int Publication::getRefNo() {
    return refNo;
}

// Display method
void Publication::display() {
    cout << "Title: " << title << endl;
    cout << "Reference Number: " << refNo << endl;
}

