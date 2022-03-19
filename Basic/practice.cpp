#include <bits/stdc++.h>
using namespace std;

bool isPrimeNumber(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num % i ==0)
        {
            return 0;
        }
        else
            return  1;
    }
}
int main()
{
    int n;
    cin>>n;
    if(isPrimeNumber(n))
    {
        cout<<"is prime number"<<endl;
    }
    else
    {
        cout<<"not a prime number"<<endl;
    }
    return 0;
}