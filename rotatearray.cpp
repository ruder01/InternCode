#include<iostream>
using namespace std;
int main(){
    int a[7]={1,2,3,4,5,6,7};
    int n=6;
    int count;
    cout<<"Enter the number of rotation: ";
    cin>>count;
    count=count%(n+1);
    int j=0;
    while(count!=j){
    int r=a[n];
    for(int i=n;i>=1;i--){
            a[i]=a[i-1];
        }
    a[0]=r;
    j++;
    }
    for(int i=0;i<=n;i++) cout<<a[i]<<" ";

}