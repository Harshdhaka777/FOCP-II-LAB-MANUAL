#include<iostream>
using namespace std;
int main(){
    int s,e; cin>>s>>e;
    for(int i=s;i<=e;i++){
        bool p=true;
        if(i<=1) p=false;
        for(int j=2;j*j<=i;j++)
            if(i%j==0){p=false;break;}
        if(p) cout<<i<<endl;
    }
}