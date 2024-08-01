#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> a = {1,6,4,8,9};
    sort(a.begin(),a.end(),less<int>());
    cout<<"Sorted array: ";
    for(int num: a)
    cout<<num<<" ";
    return 0;
}