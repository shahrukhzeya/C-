#include<iostream>
using namespace std;

int main()
{
    int times,noOfColor, i;
    cin>>times;
    for(i = 1; i <= times; i++)
    {
        cin>>noOfColor;
        cout<<noOfColor + 1<<endl;
    }
    return 0;
}