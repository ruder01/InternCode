#include<iostream>
#include<list>
using namespace std;
void insert(list<int>l,int n){
    if(l.empty()){
        l.push_front(n);
    }
    else{
        l.push_back(n);
    }
    list<int>::iterator itr;
    for(itr=l.begin();itr!=l.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

}
int main()
{
    list<int> l1 = {1,2,3,4,5};
    list<int> l2={};
    insert(l1,7);
    insert(l2,2);
}