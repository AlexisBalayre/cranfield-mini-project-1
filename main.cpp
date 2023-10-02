#include "Book.h"
#include "Journal.h"
#include "MusicCD.h"
#include "DVD.h" 
#include "Library.h"

#include <iostream>

using namespace std;

int main()
{
    Library library = Library();

    while (true)
    {
        cout << "Welcome to the Library program!" << endl;

        // Menu options
        cout << "Please select an option [Enter option number]" << endl;
        cout << "1. Borrow a publication" << endl;
        cout << "2. Return a publication" << endl;
        cout << "3. Add a publication" << endl;
        cout << "4. Display all publications depending on media type" << endl;
        cout << "5. Display a publication by reference number" << endl;
        cout << "6. Display all publications of the library" << endl;
        cout << "7. Display all publications on loan" << endl;
        cout << "8. Display the number of publications by media type" << endl;
        cout << "9. Exit" << endl;

        // Get user input
        int option;
        cin >> option;
        switch (option)
        {
        
        // Borrow a publication
        case 1:
            while (true)
            {
                try
                {
                    cout << "Enter the reference number of the publication you want to borrow" << endl;
                    unsigned int refNo;
                    cin >> refNo;
                    library.borrowPublication(refNo);
                    break;
                }
                catch (const std::exception *e)
                {
                    std::cerr << e->what() << '\n';
                }
            }
            break;

        // Return a publication
        case 2:
            while (true)
            {
                try
                {
                    cout << "Enter the reference number of the publication you want to return" << endl;
                    unsigned int refNo;
                    cin >> refNo;
                    library.returnPublication(refNo);
                    break;
                }
                catch (const std::exception *e)
                {
                    std::cerr << e->what() << '\n';
                }
            }
            break;
        
        // Add a publication
        case 3:
            while (true)
            {
                try 
                {
                    cout << "Enter the media type of the publication you want to add [book, journal, cd or dvd]" << endl;
                    string mediaType;
                    cin >> mediaType;

                    cout << "Enter the title of the publication you want to add" << endl;
                    string title;
                    cin >> title;

                    cout << "Enter the reference number of the publication you want to add" << endl;
                    unsigned int refNo;
                    cin >> refNo;
                    
                    if (mediaType == "book")
                    {
                        cout << "Enter the author of the book you want to add" << endl;
                        string author;
                        cin >> author;

                        cout << "Enter the ISBN of the book you want to add" << endl;
                        string ISBN;
                        cin >> ISBN;

                        cout << "Enter the publisher of the book you want to add" << endl;
                        string publisher;
                        cin >> publisher;

                        Book* book = new Book(mediaType, title, refNo, author, ISBN, publisher);
                        library.addPublication(book);
                    }

                    else if (mediaType == "journal")
                    {
                        cout << "Enter the date of the journal you want to add" << endl;
                        string date;
                        cin >> date;

                        cout << "Enter the editor of the journal you want to add" << endl;
                        string editor;
                        cin >> editor;

                        Journal* journal = new Journal(mediaType, title, refNo, date, editor);
                        library.addPublication(journal);
                    }

                    else if (mediaType == "dvd")
                    {
                        cout << "Enter the category of the dvd you want to add" << endl;
                        string category;
                        cin >> category;

                        cout << "Enter the director of the dvd you want to add" << endl;
                        string director;
                        cin >> director;

                        cout << "Enter the number of actors of the dvd you want to add" << endl;
                        unsigned int actorCount;
                        cin >> actorCount;

                        list<string> actors = list<string>();
                        for (int i = 0; i < actorCount; i++)
                        {
                            cout << "Enter the name of actor " << i + 1 << endl;
                            string actor;
                            cin >> actor;
                            actors.push_back(actor);
                        }

                        cout << "Enter the duration of the dvd you want to add" << endl;
                        float duration;
                        cin >> duration;

                        DVD* dvd = new DVD(mediaType, title, refNo, category, director, actorCount, actors, duration);
                        library.addPublication(dvd);
                    }

                    else if (mediaType == "cd")
                    {
                        cout << "Enter the category of the cd you want to add" << endl;
                        string category;
                        cin >> category;

                        cout << "Enter the artist of the cd you want to add" << endl;
                        string artist;
                        cin >> artist;

                        cout << "Enter the number of tracks of the cd you want to add" << endl;
                        unsigned int trackCount;
                        cin >> trackCount;

                        list<Track> tracks = list<Track>();
                        for (int i = 0; i < trackCount; i++)
                        {
                            cout << "Enter the title of track " << i + 1 << endl;
                            string title;
                            cin >> title;

                            cout << "Enter the duration of track " << i + 1 << endl;
                            float duration;
                            cin >> duration;

                            Track track = Track(title, duration);
                            tracks.push_back(track);
                        }

                        MusicCD* musicCD = new MusicCD(mediaType, title, refNo, category, artist, trackCount, tracks);
                        library.addPublication(musicCD);
                    }

                    else
                    {
                        cout << "Invalid media type" << endl;
                    }
                    
                    break;
                    
                }
                catch (const std::exception *e)
                {
                    std::cerr << e->what() << '\n';
                }
            }
            break;

        // Display all publications depending on media type
        case 4:
            while (true)
            {
                try
                {
                    cout << "Enter the media type of the publications you want to display [book, journal, cd or dvd]" << endl;
                    string mediaType;
                    cin >> mediaType;
                    list<Publication *> publications = library.GetAllPublicationsDependingOnMediaType(mediaType);
                    cout << publications.size() << endl;
                    for (Publication *publication : publications)
                    {
                        publication->display();
                    }
                    break;
                }
                catch (const std::exception *e)
                {
                    std::cerr << e->what() << '\n';
                }
            }
            break;
        
        // Display a publication by reference number
        case 5:
            while (true)
            {
                try
                {
                    cout << "Enter the reference number of the publication you want to display" << endl;
                    unsigned int refNo;
                    cin >> refNo;
                    Publication *publication = library.GetPublicationByRefNo(refNo);
                    publication->display();
                    break;
                }
                catch (const std::exception *e)
                {
                    std::cerr << e->what() << '\n';
                }
            }
            break;
        
        // Display all publications of the library
        case 6:
            while (true)
            {
                try
                {
                    list<Publication*> publications = library.GetAllPublications();
                    cout << publications.size() << endl;
                    for (Publication* publication : publications)
                    {
                        publication->display();
                    }
                    break;
                }
                catch (const std::exception *e)
                {
                    std::cerr << e->what() << '\n';
                }
            }
            break;
        
        // Display all publications on loan
        case 7:
            while (true)
            {
                try
                {
                    list<Publication *> publications = library.GetAllPublicationsOnloan();
                    cout << publications.size() << endl;
                    for (Publication *publication : publications)
                    {
                        publication->display();
                    }
                    break;
                }
                catch (const std::exception *e)
                {
                    std::cerr << e->what() << '\n';
                }
            }
            break;
        
        // Display the number of publications by media type
        case 8:
            while (true)
            {
                try
                {
                    map<string, unsigned int> publicationCountByMediaType = library.GetPublicationCountByMediaType();
                    for (auto const &x : publicationCountByMediaType)
                    {
                        cout << x.first << ": " << x.second << endl;
                    }
                    break;
                }
                catch (const std::exception *e)
                {
                    std::cerr << e->what() << '\n';
                }
            }
            break;
        
        // Exit
        case 9:
            return 0;

        // Invalid option
        default:
            break;
        }
    }

    return 0;
}