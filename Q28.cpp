#include<iostream>
using namespace std;
int main(){
    int a[5],e=0,o=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
        if(a[i]%2==0) e+=a[i];
        else o+=a[i];
    }
    cout<<e<<" "<<o;
}