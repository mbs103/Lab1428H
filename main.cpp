#include <iostream>

using namespace std;

int main()
{
    int daily1, daily2, daily3, test1, test2;
    float average_d, average_t, average_c;
    cout<<"Enter your 3 daily grades, one at a time."<<endl;
    cin>>daily1>>daily2>>daily3;
    cout<<"Now enter your 2 test grades, one at a time."<<endl;
    cin>>test1>>test2;

    average_d = (daily1 + daily2 + daily3)/3.0;
    average_t = (test1 + test2)/2.0;
    average_c = (average_d * .4) + (average_t * .6);

    cout<< "Your average is "<<average_c<<endl;

    return 0;
}

