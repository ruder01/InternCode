#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue <string> q;
    q.push("abha");
    q.push("sabha");
    q.push("mabha");

    cout<<"Size : "<<q.size()<<endl;
    q.pop();
    cout<<"After POP : "<<q.front()<<endl;
    int n=q.size();
        for(int i=0;i<n;i++){
        cout<<q.front();
        cout<<endl;
        q.pop();
    }
}