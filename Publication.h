#include <iostream>
#include <string>

#pragma once

using namespace std;

class Publication {
	private:
        string mediaType;
		string title;
        unsigned int refNo;
	public:
		Publication();
        Publication(string, string, unsigned int);
        void setMediaType(string);
        void setTitle(string);
        void setRefNo(unsigned int);
        string getMediaType();
        string getTitle();
        unsigned int getRefNo();
        virtual void display();
};
