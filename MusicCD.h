#include "Track.h"
#include "Publication.h"

#include <iostream>
#include <string>
#include <list>

using namespace std;

class MusicCD : public Publication {
    private:
        string category;
        string artist;
        unsigned int trackCount;
        list<Track> tracks;
    public:
        MusicCD();
        MusicCD(string, string, unsigned int, string, string, unsigned int, list<Track>);
        void setCategory(string);
        void setArtist(string);
        void setTrackCount(unsigned int);
        void setTracks(list<Track>);
        string getCategory();
        string getArtist();
        unsigned int getTrackCount();
        list<Track> getTracks();
        void display();

};