#include <iostream>

using namespace std;

struct mp3{
    string songtitle;
    string filename;
    string genre;
    int tracknumber;
    bool favorite;
};


int main()
{
    mp3 songs[100];
    songs[0].songtitle = "High Tea";
    songs[0].filename = "Track01.mp3";
    songs[0].genre = "Reggae";
    songs[0].tracknumber = 1;
    songs[0].favorite = 1;
    int choice, i, songcount, tracknumber;
    songcount=0;
    choice = 0;
     for(i=0; i<100; i++)
     {
         songs[i].favorite = 0;
     }

    cout<<"Welcome to MP3"<<endl;
    cout<<endl;

    while (choice!= 6)
    {
        cout<<"Please choose an option."<<endl;
        cout<<endl;
        cout<<"1- Add a new song"<<endl;
        cout<<"2- Delete a song"<<endl;
        cout<<"3- Display all songs"<<endl;
        cout<<"4- Edit a song"<<endl;
        cout<<"5- Show favorites"<<endl;
        cout<<"6- Exit"<<endl;
        cout<<endl;
        cin>>choice;
        switch (choice)
    {
        case 1:
        {
            i=songcount;
            cout<<"Please enter the song title."<<endl;
            cin>>songs[i].songtitle;
            cout<<"Please enter the filename."<<endl;
            cin>>songs[i].filename;
            cout<<"Please enter the genre."<<endl;
            cin>>songs[i].genre;
            cout<<"Please enter a 1 to favorite this song or a 0 to unfavorite it."<<endl;
            cin>>songs[i].favorite;
            songs[i].tracknumber = songcount + 1;
            songcount++;
        }
            break;
        case 2:
        {
            cout<<"Please enter the track number of the song that you would like to delete."<<endl;
            cin>>tracknumber;
            i = tracknumber - 1;
            songs[i].songtitle = " ";
            songs[i].filename = " ";
            songs[i].genre = " ";
            songs[i].tracknumber = tracknumber;
            songs[i].favorite = 0;
        }

            break;
        case 3:
        {
            for(i=0; i<100; i++);
            {
                cout<<"All songs:"<<endl;
                cout<<songs[i].tracknumber<<". "<<songs[i].songtitle<<endl;
            }
        }
            break;
        case 4:
        {
            cout<<"Please enter the track number you would like to edit."<<endl;
            cin>>i;
            cout<<"Change the song name:"<<endl;
            cin>>songs[i].songtitle;
            cout<<"Change the filename:"<<endl;
            cin>>songs[i].filename;
            cout<<"Change the genre:"<<endl;
            cin>>songs[i].genre;
            cout<<"Please enter 1 to favorite this song or 0 to unfavorite it."<<endl;
            cin>>songs[i].favorite;
        }
            break;
        case 5:
        {
            cout<<"Favorites:"<<endl;
            for(i=0; i<100; i++)
            {
                if (songs[i].favorite != 0)
                    cout<< songs[i].tracknumber << ". " << songs[i].songtitle <<endl;
            }
        }
            break;
        case 6:
        {
            return -1;
        }

        default:
            cout<<"Invalid choice, please try again."<<endl;
    }
    }


}

