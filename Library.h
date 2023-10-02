#include "Publication.h"

#include <iostream>
#include <string>
#include <list>
#include <map>

using namespace std;

class Library
{
    private:
        list<Publication*> publications;
        map<unsigned int, bool> isAvailable;

    public:
        Library();
        Library(list<Publication*>);
        void borrowPublication(unsigned int);
        void returnPublication(unsigned int);
        void addPublication(Publication*);
        list<Publication*> GetAllPublicationsDependingOnMediaType(string);
        Publication* GetPublicationByRefNo(unsigned int);
        list<Publication*> GetAllPublications();
        list<Publication*> GetAllPublicationsOnloan();
        map<string, unsigned int> GetPublicationCountByMediaType();
};
