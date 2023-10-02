#include "MusicCD.h"

#include <iostream>
#include <string>
#include <list>

using namespace std;

MusicCD::MusicCD() : Publication() {
    category: "";
    artist: "";
    trackCount: 0;
    tracks: list<Track>();
}

MusicCD::MusicCD(string m, string t, unsigned int r, string c, string a, unsigned int tc, list<Track> tr) : Publication(m, t, r) {
    category = c;
    artist = a;
    trackCount = tc;
    tracks = tr;
}


void MusicCD::setCategory(string c) {
    category = c;
}

void MusicCD::setArtist(string a) {
    artist = a;
}

void MusicCD::setTrackCount(unsigned int tc) {
    trackCount = tc;
}

void MusicCD::setTracks(list<Track> tr) {
    tracks = tr;
}

string MusicCD::getCategory() {
    return category;
}

string MusicCD::getArtist() {
    return artist;
}

unsigned int MusicCD::getTrackCount() {
    return trackCount;
}

list<Track> MusicCD::getTracks() {
    return tracks;
}

void MusicCD::display() {
    float totalDuration = 0.0; 
    for (Track t : tracks) {
        totalDuration += t.getDuration();
    }
    cout << "Title: " << getTitle() << endl;
    cout << "Reference Number: " << getRefNo() << endl;
    cout << "Category: " << category << endl;
    cout << "Artist: " << artist << endl;
    cout << "Track Count: " << trackCount << endl;
    cout << "Total Duration:" << totalDuration << " minutes" << endl;
    cout << "Tracks: " << endl;
    for (Track t : tracks) {
        cout << "Track Title: " << t.getTitle() << endl;
        cout << "Track Duration: " << t.getDuration() << " minutes" << endl;
    }
}