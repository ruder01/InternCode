#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    // To Find Sum of elements of Array
    int sum=0;
    for(auto x: a){
        sum+=x;
    }
    cout<<"Sum : "<<sum<<endl;
    // To Find Maximum element of Array
    int max=-32678;
    for(auto x: a){
        if(x>max) max=x;
    }
    cout<<"Max Element : "<<max;
} 
