#include "Publication.h"

#include <iostream> 
#include <string>
#include <list>

using namespace std;

class DVD : public Publication {
    private:
        string category;
        string director;
        unsigned int actorsCount;
        list<string> actors;
        float duration;
    public:
        DVD();
        DVD(string, string, unsigned int, string, string, unsigned int, list<string>, float);
        void setCategory(string);
        void setDirector(string);
        void setActorsCount(unsigned int);
        void setActors(list<string>);
        void setDuration(float);
        string getCategory();
        string getDirector();
        unsigned int getActorsCount();
        list<string> getActors();
        float getDuration();
        void display();
};