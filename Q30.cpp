#include<iostream>
using namespace std;
int main(){
    int a[10],t=0;
    for(int i=0;i<10;i++){ cin>>a[i]; t+=a[i]; }
    cout<<t<<" "<<t/10.0;
}