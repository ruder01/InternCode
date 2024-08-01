#include<bits/stdc++.h>
#include<algorithm>
#include<array>
using namespace std;
int main(){
    array <int,5> a;
    cout<<"Enter element in array: \n";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    // for(int i=0;i<5;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl<<a.size();
    // cout<<endl<<a.at(1);
    // cout<<endl<<a.data();
    // cout<<endl<<a.empty();
    // cout<<endl<<a.max_size()<<endl;
    // cout<<"First Element: "<<a.front();
    // cout<<"\nLast Element: "<<a.back()<<endl;

    for(int i=0;i<5;i++){
        int count=1;
        if(a[i]==a[i-1]) continue;
        for(int j=i+1;j<5;j++){
            if(a[i]==a[j]) count++;
        }
        cout<<a[i]<<"is present "<<count<<" times\n";
    }
}
