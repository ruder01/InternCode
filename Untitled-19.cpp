#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int z=j+1;z<n;z++){
                if(a[i]+a[j]+a[z]==x) {
                    cout<<"Pair :"<<a[i]<<" "<<a[j]<<" "<<a[z]<<endl;
                }
            }
        }
    }
    return 0;
}