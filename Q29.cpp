#include<iostream>
using namespace std;
int main(){
    int a[30];
    for(int i=0;i<30;i++) cin>>a[i];
    int m=a[0];
    for(int i=1;i<30;i++) if(a[i]<m) m=a[i];
    cout<<m;
}