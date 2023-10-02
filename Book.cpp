#include "Book.h"

#include <iostream>
#include <string>

using namespace std;

// Default Constructor
Book::Book() : Publication() {
    author = "";
    ISBN = "";
    publisher = "";
}

// Overloaded Constructor
Book::Book(string m, string t, unsigned int r, string a, string i, string p) : Publication(m, t, r) {
    author = a;
    ISBN = i;
    publisher = p;
}

// Setter for author
void Book::setAuthor(string a) {
    author = a;
}

// Setter for ISBN
void Book::setISBN(string i) {
    ISBN = i;
}

// Setter for publisher
void Book::setPublisher(string p) {
    publisher = p;
}

// Getter for author
string Book::getAuthor() {
    return author;
}

// Getter for ISBN
string Book::getISBN() {
    return ISBN;
}

// Getter for publisher
string Book::getPublisher() {
    return publisher;
}

// Display method
void Book::display() {
    Publication::display();
    cout << "Author: " << author << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Publisher: " << publisher << endl;
}