#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
    int buyprice=v[0];
    int profit=0;
    for(int i=1;i<n;i++){
        if(buyprice>v[i]){
            buyprice=v[i];
        }
        profit=max(profit, v[i]-buyprice);
    }
    cout<<profit;
}