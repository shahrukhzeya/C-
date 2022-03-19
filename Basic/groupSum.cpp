// Group sum Question hacker  rank


#include<iostream>
using namespace std;
int main()
{   
    int l= 0;
    int k,sum = 0; 
    cin>>k;//3
    l = (k * (k -1) + 1);// 7
    for(int i = 0; i< k; i ++)
    {
        
        sum = sum + l; //0+7=7 7+9=16 16+11=27
        l += 2;// 9 11 13
    }
    cout<<sum;
    
    
    return 0;
}
