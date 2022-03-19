#include<iostream>
using namespace std;
int main()
{
    // table using for loop
    int n,table;
    cin>>n;
    for(int i =1; i<=10; i++)
    {
        table = n *i;
        cout<<n<<" x "<<i<<" = "<<table<<endl;
    }
    
    // Table using while loop
    // int n,c;
    // cin>>n;//2
    // int i=1;
    // while(i<=10)
    // {
    //     c = n * i;// 2*1 =2 2*2= 4 2*3=6....
    //     cout<<c<<endl;// 2 4 6....
    //     i++;// 2 3 ....
        
    // }
    return 0;
}