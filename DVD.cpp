#include "DVD.h"

#include <iostream>
#include <string>
#include <list>

using namespace std;

DVD::DVD() : Publication() {
    duration = 0.0;
    category = "";
    director = "";
    actorsCount = 0;
    actors = list<string>();
}

DVD::DVD(string m, string t, unsigned int p, string c, string d, unsigned int ac, list<string> a, float du) : Publication(m, t, p) {
    duration = du;
    category = c;
    director = d;
    actorsCount = ac;
    actors = a;
}

void DVD::setCategory(string c) {
    category = c;
}

void DVD::setDirector(string d) {
    director = d;
}

void DVD::setActorsCount(unsigned int ac) {
    actorsCount = ac;
}

void DVD::setActors(list<string> a) {
    actors = a;
}

void DVD::setDuration(float du) {
    duration = du;
}

string DVD::getCategory() {
    return category;
}

string DVD::getDirector() {
    return director;
}

unsigned int DVD::getActorsCount() {
    return actorsCount;
}

list<string> DVD::getActors() {
    return actors;
}

float DVD::getDuration() {
    return duration;
}

void DVD::display() {
    cout << "Title: " << getTitle() << endl;
    cout << "Reference Number: " << getRefNo() << endl;
    cout << "Category: " << category << endl;
    cout << "Director: " << director << endl;
    cout << "Actors Count: " << actorsCount << endl;
    cout << "Actors: " << endl;
    for (list<string>::iterator it = actors.begin(); it != actors.end(); it++) {
        cout << *it << endl;
    }
    cout << "Duration: " << duration << endl;
}

