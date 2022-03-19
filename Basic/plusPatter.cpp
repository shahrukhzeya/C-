#include <iostream>
#include<math.h>
using namespace std;

int main ()
{
    int n, i, j;
    cin>>n;//  5  2+1
    for (i = 1; i <= n; i++)
    {
        for(j = 1; j<= n; j++)
        {
            if( i == n/2 + 1 || j == n/2 + 1) //
            {
                cout<<"+";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
    
    return 0;
    
}