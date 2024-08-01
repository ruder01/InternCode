#include<iostream>
using namespace std;
class node{
public:
    int value;
    node* next;
    node(int v){
        value=v;
        next=NULL;
    }
};
int main(){
    node a(5);
    node b(10);
    node c(15);
    node d(20);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    cout<<((a.next)->value);
}