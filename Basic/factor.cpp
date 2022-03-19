#include<iostream>
using namespace std;
int main()
{
    int n, count =0, i=1;
    cin>>n;
    while(i<=n)
    {
        if(n%i == 0)
        {
            count++;
            cout<<i<<" ";   
        }
        i++;
        
    }
    cout<<endl<<"Total factors is: "<<count;
    return 0;
}