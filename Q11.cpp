#include<iostream>
using namespace std;
int main(){
    int q; float p;
    cin>>q>>p;
    float t=q*p;
    if(q>1000) t-=t*0.1;
    cout<<t;
}