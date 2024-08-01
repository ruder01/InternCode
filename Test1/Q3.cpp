#include<iostream>
using namespace std;
int divisibleby3(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%3==0) 
            count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }cout<<endl;
    cout<<divisibleby3(a,n);

}