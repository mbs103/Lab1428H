//Michael Bailey Summers mbs103
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
    int i, oper, index, data0, data1, data2, num_op;
    int ram[256]= {4,23,10,40,5};
    ifstream fin("input.txt");

    //cout<<"Please enter the number of operations you would like in your program."<<endl;
    fin>>num_op;
    while(num_op > 0)
    {
    //cout<<"Please choose the operation:"<<endl;
    //cout<<"0-Add, 1-Subtract, 2-Multiply, 3-Divide, 4-Exponent, 5-Read, 6-Write"<<endl;
    fin>>oper;
    //cout<<"Please input which index you would like to use."<<endl;
    fin>>i;
     if ( i>255 )
    {
            cout<<"Index outside of range, please choose another."<<endl;

            return -1;
    }
    //cout<<"Please input the value of data1."<<endl;
    fin>>data1;
   //cout<<"Please input the value of data2."<<endl;
    fin>>data2;

    switch (oper)
    {
    case 0:
    {
        ram[i]= ram[data1]+ ram[data2];
        cout<<"The new stored value is "<< ram[i]<<endl;
    }
    break;
    case 1:
    {
        ram[i] = ram[data1] - ram[data2];
        cout<<"The new stored value is "<< ram[i]<<endl;
    }
    break;
    case 2:
    {
        ram[i] = ram[data1] * ram[data2];
        cout<<"The new stored value is "<< ram[i]<<endl;
    }
    break;
    case 3:
    {
        ram[i] = ram[data1] / ram[data2];
        cout<<"The new stored value is "<< ram[i]<<endl;
    }
    break;
    case 4:
    {
        ram[i] = pow(ram[data1],ram[data2]);
        cout<<"The new stored value is "<< ram[i]<<endl;
    }
    break;
    case 5:
    {
        ram[i]= ram[data1];
    }
    break;
    case 6:
    {
        cout<< "The value stored at that index is "<<ram[i]<<endl;
    }
    default:
    {cout<<"Unable to execute code."<<endl;
        data0 = -1;}
}
    num_op--;
}
        return 0;
}
