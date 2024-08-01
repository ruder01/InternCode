#include<iostream>
using namespace std;
class print{
    int x,y;
public:
    void display(){
    for(int i=x;i<=y;i++) cout<<i<<" ";
    }

void input(){
    cout<<"Enter the starting number: ";
    cin>>x;
    cout<<"Enter the last number: ";
    cin>>y;
}
};

