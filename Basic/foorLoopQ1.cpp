#include<iostream>
using namespace std;
//     *
//    ***
//   *****
//  *******
// *********

int main()
{
    int n,i,j,s;
    n= 5;
    for (i=1; i<=n; i++)
    {
        for(s =1; s=(n-i);s++)
        {
            cout<<" ";
        }
        for (j =1; j<= (2*i - 1); j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }




    return 0;
}
