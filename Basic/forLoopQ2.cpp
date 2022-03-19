//find the sum of number from any number to any number
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"enter number n:";
    cin>>n;
 
    int sum =0;
    for (int counter = -5; counter <=n;counter++)
    {
        sum = sum + counter;
    }

    cout<<sum<<endl;

    return 0;
}