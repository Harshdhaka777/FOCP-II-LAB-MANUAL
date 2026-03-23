#include<iostream>
using namespace std;
int main(){
    int item, qty;
    float price;
    cin>>item>>qty>>price;
    float total=qty*price;
    cout<<total-total*0.2;
}