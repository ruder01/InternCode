#include<iostream>
using namespace std;
int main(){
    int nc;
    int lc;
    cout<<"Enter the number of classes held: ";
    cin>>nc;
    cout<<"Enter the number of classes attended: ";
    cin>>lc;
    float r=(lc*100)/nc;
    cout<<"Percentage of class attended: "<<r<<"%"<<endl;
    if(r<75) cout<<"No U are not allowed to sit in exam" ;
    else cout<<"Yes U are allowed to sit in exam";

}