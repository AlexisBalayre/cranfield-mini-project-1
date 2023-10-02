#include "Track.h"

#include <iostream>

using namespace std;

Track::Track() {
    title = "";
    duration = 0.0;
}

Track::Track(string t, float d) {
    title = t;
    duration = d;
}

void Track::setTitle(string t) {
    title = t;
}

void Track::setDuration(float d) {
    duration = d;
}

string Track::getTitle() {
    return title;
}

float Track::getDuration() {
    return duration;
}

void Track::display() {
    cout << "Title: " << title << endl;
    cout << "Duration: " << duration << endl;
}