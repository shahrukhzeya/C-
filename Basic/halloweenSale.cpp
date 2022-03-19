#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main ()
{
    int p,d,m,s,sum =0, count = 0;
    cin>>p>>d>>m>>s;
    
    while(1)
    {
        sum += p;
        if(s>= sum)
        {
            count++;
            if(p-d >= m)
            {
                p -=d;
             
             }
            else
            {
                p = m;
            }
       
        }
        else
        {
            break;
        }

    }
    cout<<count;
    

    return 0;
    
}
