#include<iostream>
using namespace std;
int main (){
    int number1,number2;
    int min,max;
    cin>>number1>>number2;
    if (number1>number2){
        max=number1;
        min=number2;
    }
    else{
        max=number2;
        min=number1; 
    }
    cout<<"Minium = "<<min<<endl;
    cout<<"Maximun = "<<max<<endl;

return 0;
}