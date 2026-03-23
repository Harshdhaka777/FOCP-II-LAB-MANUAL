#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    float d=b*b-4*a*c;
    if(d>0)
        cout<<(-b+sqrt(d))/(2*a)<<" "<<(-b-sqrt(d))/(2*a);
    else if(d==0)
        cout<<-b/(2*a);
    else
        cout<<"Imaginary";
}