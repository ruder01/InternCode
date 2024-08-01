#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    list <int> l;
    int n;
    cout<<"Enter the size of list: ";
    cin>>n;
    cout<<"Enter the elements: ";
    int m=INT_MIN;
    for(int i=0;i<n;i++){
        int n;
        cin>>n;
        l.push_back(n);
        if(m<n) m=n ;
    }
    cout<<"\nMax element in the list: "<<m;
    }
