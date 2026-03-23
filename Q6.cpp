#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        float s; cin>>s;
        float bonus=s*0.12;
        cout<<"Net="<<s+bonus<<endl;
    }
}