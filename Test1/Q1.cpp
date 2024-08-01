#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nElements present in array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}