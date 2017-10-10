#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    //NUMBER OF ROWS AND COLUMNS
    const int ROWS = 10;
    const int COLS = 10;
    char life[ROWS][COLS];
    char copy[ROWS][COLS];

    //RANDOM NUMBER GENERATOR TO CREATE INITIAL GENERATION
    srand (time(NULL));
    int cell;

    for(int r=0; r<ROWS; r++)
    {
        for(int c =0; c<COLS; c++)
        {
            cell = rand() % 7;
            if(cell >= 5)
            {
                life[r][c] = '*';
            }
            else
            {
                life[r][c]=' ';
            }
        }
    }

    int r, c, gen, cell_count;

    cout<< "How many generations would you like to play?"<<endl;
    cin>>gen;


    for(int x=0; x<gen; x++)
    {
        cout<<"Gen #"<<x<<endl;
        for(r=0; r<ROWS; r++)
        {
            for(c=0; c<COLS; c++)
            {
                cout<<life[r][c]<<" ";
            }
            cout<<endl;
        }

        for(r=0; r<ROWS; r++)
        {
            for (c=0; c<COLS; c++)
            {
                cell_count = 0;
                if (r-1>=0 && life[r-1][c]=='*')
                    cell_count++;
                if (r+1<=ROWS && life[r+1][c]=='*')
                    cell_count++;
                if (c-1>=0 && life[r][c-1]=='*')
                    cell_count++;
                if (c+1<=COLS && life[r][c+1]=='*')
                    cell_count++;
                if (r-1>=0 && c-1>=0 && life[r-1][c-1]=='*')
                    cell_count++;
                if (r-1>=0 && c+1<=COLS && life[r-1][c+1]=='*')
                    cell_count++;
                if (r+1<=ROWS && c-1>=0 && life[r+1][c-1]=='*')
                    cell_count++;
                if (r+1<=ROWS && c+1<=COLS && life[r+1][c+1]=='*')
                    cell_count++;

                if(cell_count<2)
                    copy[r][c]=' ';
                else if(cell_count==2)
                    copy[r][c] = life[r][c];
                else if(cell_count==3)
                    copy[r][c] ='*';
                else
                    copy[r][c] =' ';
            }
        }

        for(r=0; r<ROWS; r++)
        {
            for (c=0; c<COLS; c++)
            {
                life[r][c]=copy[r][c];
            }
        }
    }
    return 0;

}
