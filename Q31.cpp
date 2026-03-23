#include<iostream>
using namespace std;
int main(){
    int a[5],c=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
        if(a[i]%15==0) c++;
    }
    cout<<c;
}