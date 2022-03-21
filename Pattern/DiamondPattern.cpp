#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int space = n/2;
    int star = 1;

    //write your code here
    for(int i =1;i<=n;i++)
    {
        for(int j=1; j<=space; j++)
        {
            cout<<"\t";
        }
        for(int j=1; j<= star;j++)
        {
            cout<<"*\t";
        }
        cout<<endl;
        if(i <= n/2)
        {
            star +=2;
            space --;
        }
        else
        {
            star -=2;
            space ++;
        }
        
    }
    
}