#include <iostream>

using namespace std;

bool IsPrime(int num);
bool IsHappy (int num);
bool AddToCycle (int num);
bool CycleContains (int num);
void SelectionSort (int num);
int sums[20];
int main()
{
    bool happy;
    int num;
    cin>>num;
    happy = IsHappy(num);

    return 0;
}
bool IsPrime (int num)
{
    for(int x=2; x<num/2; x++)
    {
        if(num%x!=0)
            return true;
        else
            return false;
    }
}
bool IsHappy (int num)
{
    bool prime;
    int digit, sum=0;
    prime = IsPrime(num);
    cout<<prime<<endl;
    while (num!=1)
    {
        sum = 0;
        while (num>0)
        {

            digit = (num%10);
            num /=10;
            sum+=(digit*digit);
        }
        num = sum;
        cout<<num<<endl;

    }
     if(num==1)
        {
            if (prime==true)
                cout<<"The number is a happy prime number."<<endl;
            else
                cout<<"The number is a happy number."<<endl;
            return true;
        }
        else
            cout<<"This number is not happy."<<endl;
        return false;
}
bool AddToCycle (int num)
{

}
bool CycleContains (int num)
{
    for(i=0; i<20; i++)
    {
        if (sums[i]=sum)
            return false;
        else
            return true;
    }
}
