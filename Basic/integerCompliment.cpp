#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<1;
    }
    else
    {
        int m =n;
        int mask =0,ans;
        while(m!=0)
        {
            mask = (mask << 1) | 1;
            m =m >> 1;
        }
        ans = ~n & 1;
        cout<<ans<<endl;

    }
    
    return 0;
}