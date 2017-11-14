#include <iostream>

using namespace std;

int nfactorial(int val);
int nfibonacci (int val);
int main()
{
    int val, factorial, fib;
    cout<<"Please enter a number to find its factorial."<<endl;
    cin>>val;
    factorial = nfactorial(val);
    cout<<"The factorial is: "<<factorial<<endl;
    cout<<"Please enter a number to find its Fibonacci equivalent."<<endl;
    fib = nfibonacci(val);
    cout<<"The Fibonacci equivalent is: "<<fib<<endl;
    int x=0;
    while(x<=val)
    {
        cout<<nfibonacci(x)<<" ";
        x++;
    }
    cout<<endl;
    return 0;
}

int nfactorial(int val)
{
    if (val == 0)
        return 1;
    return val * nfactorial(val-1);
}

int nfibonacci (int val)
{
    if (val == 0)
        return val;
    if (val == 1)
        return val;
    return nfibonacci(val-1)+ nfibonacci(val-2);
}
