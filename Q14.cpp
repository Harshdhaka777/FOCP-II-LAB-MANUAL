#include<iostream>
using namespace std;
int main(){
    char op;
    int a,b;
    while(true){
        cin>>op;
        if(op=='E') break;
        cin>>a>>b;
        if(op=='+') cout<<a+b;
        else if(op=='-') cout<<a-b;
        else if(op=='*') cout<<a*b;
        else if(op=='/') cout<<a/b;
        cout<<endl;
    }
}