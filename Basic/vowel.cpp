#include <iostream>
using namespace std;
int main (){
    char c;
    int isLowerVowel,isUpperVowel;
    cout<<"Enter a Alphabet :\n";
    cin>> c;
    isLowerVowel=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    isUpperVowel=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    if (isLowerVowel || isUpperVowel){
        cout<<c<<" is a vowel\n";
    }
    else{
        cout<<c<<" is a consonent\n";
    }
return 0;
}