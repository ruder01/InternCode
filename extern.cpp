#include<iostream>
using namespace std;
extern int var=0;
void example(){
    var++;
    cout<<var;
}
main(){
    example();
}