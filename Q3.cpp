#include<iostream>
using namespace std;
int main(){
    int ch;
    cin>>ch;
    if(ch==1){
        float f; cin>>f;
        cout<<(f-32)*5/9;
    } else {
        float c; cin>>c;
        cout<<(c*9/5)+32;
    }
}