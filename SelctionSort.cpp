// 5 7 4 3
#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                continue;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
} 