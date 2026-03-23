#include<iostream>
using namespace std;
int main(){
    int a[5],t=0;
    for(int i=0;i<5;i++){ cin>>a[i]; t+=a[i]; }
    cout<<"Total="<<t<<" Percentage="<<t/5.0;
}