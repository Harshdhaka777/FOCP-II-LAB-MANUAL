#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s; getline(cin,s);
    string word;
    stringstream ss(s);
    int words=0;
    while(ss>>word) words++;
    cout<<"Words="<<words;
}