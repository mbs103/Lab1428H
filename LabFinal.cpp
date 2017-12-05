#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int betFunc(int &myMoney, int &betAmount);
int getRolls(int &compDie1, int &userDie1);
bool results(int &compDie1, int &userDie1, int &myMoney, int &betAmount);

int main()
{
    cout<<"Gambling is an addiction...."<<endl;
    cout<<endl;
    int myMoney, betAmount, compDie1=0, userDie1=0;
    char choice='y';
    myMoney=1000;
    do
    {
    switch (choice)
    {
        case 'y':
            betFunc(myMoney, betAmount);
            getRolls(compDie1, userDie1);
            results(compDie1, userDie1, myMoney, betAmount);
            cout<<"You now have $ "<<myMoney<<endl;
            break;
        case 'Y':
            betFunc(myMoney, betAmount);
            getRolls(compDie1, userDie1);
            results(compDie1, userDie1, myMoney, betAmount);
            cout<<"You now have $ "<<myMoney<<endl;
            break;
        default:
            cout<<"You ended with $ "<<myMoney<<endl;
            return 0;
    }
    cout<<"Would you like to continue? (y or n)"<<endl;
    cin>>choice;
    }while(choice=='y' || choice=='Y');
}
int betFunc(int &myMoney, int &betAmount)
{
    cout<<"You currently have $"<<myMoney<<endl;
    cout<<"How much would you like to bet?"<<endl;
    cin>>betAmount;
    while (betAmount>myMoney)
    {
        cout<<"You can't bet more than you have. Try another amount"<<endl;
        cin>>betAmount;
    }
    cout<<"$ "<<betAmount<<endl;
}
int getRolls(int &compDie1, int &userDie1)
{
    srand(time(NULL));
    compDie1 = rand() % 6+1 ;
    userDie1 = rand() % 6+1 ;
    cout<<"You rolled a "<<userDie1<<endl;
    cout<<"Your opponent rolled a "<<compDie1<<endl;
    return compDie1, userDie1;
}
bool results(int &compDie1, int &userDie1, int &myMoney, int &betAmount)
{
    if (compDie1 < userDie1)
    {
        cout<<"You won $"<<betAmount<<endl;
        myMoney+=betAmount;
    }
    else if (compDie1 > userDie1)
    {
        cout<<"You lost $"<<betAmount<<endl;
        myMoney-=betAmount;
    }
    else if (compDie1 == userDie1)
    {
        cout<<"It's a draw, your money remains the same."<<endl;
    }
}
