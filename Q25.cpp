#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string s; cin>>s;
    bool u=0,l=0,d=0,sp=0;
    for(char c:s){
        if(isupper(c)) u=1;
        else if(islower(c)) l=1;
        else if(isdigit(c)) d=1;
        else if(c=='@'||c=='#'||c=='$'||c=='%'||c=='!'||c=='&'||c=='*') sp=1;
    }
    if(u&&l&&d&&sp) cout<<"Valid";
    else cout<<"Invalid";
}