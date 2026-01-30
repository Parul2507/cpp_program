#include <iostream>
#include <math.h>
#include <assert.h>
#include <list>

using namespace std;

class youTube
{
private:
    string Name;
    string Ownername;
    int Subscriber;
    list<string> Videotitle;

public:
    youTube(string name, string ownername)
    {
        Name = name;
        Ownername = ownername;
        Subscriber = 0;
    }
    void getInfo()
    {
        cout << "Name: " << Name << " "
             << "Ownername: " << Ownername << endl;
        cout << "Sunscriber: " << Subscriber << endl;
        cout << "video: " << endl;
        for (string video : Videotitle)
        {
            cout << video << endl;
        }
    }
    void videoTitle(string title)
    {
        Videotitle.push_back(title);
    }
    void subscribe()
    {
        Subscriber++;
    }
    void unsubscribe()
    {
        Subscriber--;
    }
};

class cookingYoutube : public youTube
{
public:
    cookingYoutube(string Name, string Ownername) : youTube(Name, Ownername)
    {
    }
    void practice()
    {
        cout << "This is a cooking channel" << endl;
    }
};
int main()
{
    youTube yt("ParulClasses", "Parul");

    yt.videoTitle("c++ programs");
    yt.videoTitle("oops concept");
    yt.subscribe();
    yt.subscribe();
    yt.unsubscribe();
    yt.getInfo();

    cookingYoutube yout("PalakKitchen", "Palak");
    yout.videoTitle("Dum_biriyani");
    yout.videoTitle("AalooParatha");
    yout.subscribe();
    yout.subscribe();
    yout.practice();
    yout.getInfo();
    return 0;
}