#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l {0,1,2,3,4,5,3};
    list<int>::iterator itr = l.begin();
    cout<<"Initial List: "<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }

}
