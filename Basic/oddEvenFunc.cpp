#include<bits/stdc++.h>
using namespace std;

bool isEven(int n)
{
    if (n % 2 ==0)
        return true;
    return false;
}
int main()
{
    int num;
    cin>>num;
    if(isEven(num))
    {
        cout<<"even number"<<endl;
    }
    else
    cout<<"odd number"<<endl;


    return 0;
}