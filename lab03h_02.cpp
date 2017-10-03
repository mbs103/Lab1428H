//Michael Bailey Summers mbs103
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double price, tip_percent, tip_amount;
    int inst=2;

    /*cout<<"Please choose the operation:"<<endl;
    cout<<"0-Add, 1-Subtract, 2-Multiply, 3-Divide, 4-Modulus, 5-Exponent"<<endl;
    cin>>inst;
*/
    cout<<"Please input the price of the meal."<<endl;
    cin>>price;
    cout<<"Please input the percent of tip you would like to leave."<<endl;
    cin>>tip_percent;


    switch (inst)
    {
/*
    case 0:
    {
        data0 = data1 + data2;
        cout<<"The sum is:"<<data0<<endl;
    }
    break;
    case 1:
    {
        data0 = data1 - data2;
        cout<<"The difference is:"<<data0<<endl;
    }
    break;
    */
    case 2:
    {   tip_percent = tip_percent / 100;
        tip_amount = price * tip_percent;
        cout<<"The appropriate tip amount is: $"<<tip_amount<<"."<<endl;
    }
    break;
    /*
    case 3:
    {
        data0 = data1 / data2;
        cout<<"The quotient is:"<<data0<<endl;
    }
    break;
    case 4:
    {
        data0 = data1 % data2;
        cout<<"The remainder is:"<<data0<<endl;
    }
    break;
    case 5:
    {
        data0 = pow(data1,data2);
        cout<<"The power is:"<<data0<<endl;
    }
    break;
    */
    default:
    {cout<<"Unable to perform operation."<<endl;
        tip_percent = -1;}
}

        return 0;
}
