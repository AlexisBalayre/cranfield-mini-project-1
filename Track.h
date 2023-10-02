#include <iostream>
#include <string>

using namespace std;

class Track {
    private:
        string title;
        float duration;
    public:
        Track();
        Track(string, float);
        void setTitle(string);
        void setDuration(float);
        string getTitle();
        float getDuration();
        void display();
};