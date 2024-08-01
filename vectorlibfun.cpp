#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector <int> v;
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(10);
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(12);
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(14);
    cout << "capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Front : " << v.front() << endl;
    cout << "Back : " << v.back() << endl;
    cout << "Before POP" << endl;
    for (int i:v) {
        cout << i << " ";
    }cout << endl;
    v.pop_back();
    cout << "After Pop" << endl;
    for (int i:v) {
        cout << i << " ";
    }cout<<endl;
    cout<<"Before clear: "<<v.size();
    v.clear();
    cout<<"\nAfter clear: "<<v.size();
    cout<<"\nCapacity: "<<v.capacity()<<endl;

    //another way to create a vector 
    vector <int> x(5,1);
    for(int i:x) cout<<i<<" ";

}