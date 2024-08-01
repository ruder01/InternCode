#include<iostream>
using namespace std;
float pound(float r){
    return r/106;
}
float inr(float p){
    return p*106;
}
int main(){
    int n;
    cout<<"Press 1. Conversion Pound to Inr\tPress 2. Conversion Inr to Pound ";
    cin>>n;
    float m;
    cout<<"Enter the money: ";
    cin>>m;
    if(n==1) cout<<inr(m);
    else if(n==2) cout<<pound(m);
    else cout<<"Enter the right choice";
    return 0;
}