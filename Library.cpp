#include "Library.h"

#include <iostream>

using namespace std;

Library::Library() {
    publications = list<Publication*>();
    isAvailable = map<unsigned int, bool>();
}

Library::Library(list<Publication*> publications) {
    this->publications = publications;
    isAvailable = map<unsigned int, bool>();
    for (Publication* publication : publications) {
        isAvailable[publication->getRefNo()] = true;
    }
}

void Library::borrowPublication(unsigned int refNo) {
    if (isAvailable[refNo]) {
        isAvailable[refNo] = false;
        cout << "Publication borrowed" << endl;
    } else {
        cout << "Publication not available" << endl;
    }
}

void Library::returnPublication(unsigned int refNo) {
    if (!isAvailable[refNo]) {
        isAvailable[refNo] = true;
        cout << "Publication returned" << endl;
    } else {
        cout << "Publication already available" << endl;
    }
}

void Library::addPublication(Publication* publication) {
    publications.push_back(publication);
    isAvailable[publication->getRefNo()] = true;
    cout << "Publication added" << endl;
}

list<Publication*> Library::GetAllPublicationsDependingOnMediaType(string mediaType) {
    list<Publication*> publicationsByMediaType;
    for (Publication* publication : publications) {
        if (publication->getMediaType() == mediaType) {
            publicationsByMediaType.push_back(publication);
        }
    }
    return publicationsByMediaType;
}

Publication* Library::GetPublicationByRefNo(unsigned int refNo) {
    for (Publication* publication : publications) {
        if (publication->getRefNo() == refNo) {
            return publication;
        }
    }
    cout << "Publication not found" << endl;
}

list<Publication*> Library::GetAllPublications() {
    return publications;
}

list<Publication*> Library::GetAllPublicationsOnloan() {
    list<Publication*> publicationsOnloan;
    for (Publication* publication : publications) {
        if (!isAvailable[publication->getRefNo()]) {
            publicationsOnloan.push_back(publication);
        }
    }
    return publicationsOnloan;
}

map<string, unsigned int> Library::GetPublicationCountByMediaType() {
    map<string, unsigned int> publicationCountByMediaType;
    for (Publication* publication : publications) {
        if (publicationCountByMediaType.find(publication->getMediaType()) == publicationCountByMediaType.end()) {
            publicationCountByMediaType[publication->getMediaType()] = 1;
        } else {
            publicationCountByMediaType[publication->getMediaType()]++;
        }
    }
    return publicationCountByMediaType;
}
