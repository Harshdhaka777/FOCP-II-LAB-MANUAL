#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(isalpha(c)){
        if(string("aeiouAEIOU").find(c)!=string::npos)
            cout<<"Vowel";
        else cout<<"Consonant";
    } else if(isdigit(c)){
        cout<<"Number";
    } else {
        cout<<"Special";
    }
}