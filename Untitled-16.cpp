#include<iostream>
using namespace std;
int main(){
    int a[5]={1,3,5,6,7};
    cout<<"Completely Initialized Int Array A: "<<endl;
    for(int x: a){
        cout<<x<<endl;
    }
    cout<<endl;

    int b[6]={1,2,3};
    cout<<"Partial Initialized Int Array B: "<<endl;
    for(int y: b){
        cout<<y<<endl;
    }
    cout<<endl;

    float c[4]={1.4,6.3,2.8,5};
    cout<<"Completely Initialized Float Array C: "<<endl;
    for(float z: c){
        cout<<z<<endl;
    }
    cout<<endl;

    float d[6]={12.5,234.5,34.5,23.6,76.3,2.4};
    cout<<"Completely Initialized Float Array D with auto: "<<endl;
    for(auto z: d){
        cout<<z<<endl;
    }
    cout<<endl;

    char e[6]={'a','f','h','y',66,'x'};
    cout<<"Completely Initialized Float Array E with auto: "<<endl;
    for(auto z: e){
        cout<<z<<endl;
    }
    cout<<endl;

}