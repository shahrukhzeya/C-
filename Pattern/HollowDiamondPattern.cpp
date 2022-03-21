#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int star = n/2+1;
    int space = 1;
    for(int i =1; i<=n;i++)
    {
        for(int j =1; j<= star;j++)
        {
            cout<<"*\t";
        }
        for(int k=1; k<=space; k++)
        {
            cout<<"\t";
        }
        for(int j =1; j<= star;j++)
        {
            cout<<"*\t";
        }
        if(i<=n/2)
        {
            star--;
            space += 2;
        }
        else
        {
            star ++;
            space -= 2;
        }
        cout<<endl;
    }
    
}