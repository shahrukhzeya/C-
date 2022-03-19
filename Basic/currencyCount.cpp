#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int a = num / 100;
    cout<<" number of 100 notes :"<<a<<endl;
    int b = num % 100;//30
    int c= b/20;
    cout<<" number of 20 notes :"<<c<<endl;
    int d = b % 20;
    int e = d/10;
    cout<<" number of 10 notes :"<<e<<endl;
    return 0;
}