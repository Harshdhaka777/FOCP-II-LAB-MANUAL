#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int sum=0;
    for(int i=1;i<n;i++) if(n%i==0) sum+=i;
    if(sum==n) cout<<"Perfect";
    else{
        int t=n,s=0;
        while(t){ int d=t%10; s+=d*d*d; t/=10; }
        if(s==n) cout<<"Armstrong";
        else cout<<"Neither";
    }
}