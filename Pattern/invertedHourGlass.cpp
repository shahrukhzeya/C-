#include<iostream>
using namespace std;

int main(){
    
 // write your code here
 int n;
 cin>>n;
 int star = n;
 int space = 0;

 for(int i =1; i<=n; i++)
 {
    for(int j = 1; j<= space; j++)
    {
        cout<<"\t";
    }
    for(int j =1; j<= star; j++)
    {
        if(i>n/2+1 && i<n)
        {
            if(j ==1 || j == star){
                cout<<"*\t";
            }else{
                cout<<"\t";
            }
        }
        else{
            cout<<"*\t";
        }
    }
    if(i<=n/2)
    {
        star -= 2;
        space ++;
    }
    else
    {
        star += 2;
        space --;
    }
    cout<<endl;
 }
    
    
}