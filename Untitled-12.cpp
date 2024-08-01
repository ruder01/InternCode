#include<iostream>

using namespace std;

void add(int a,int b){
    cout<<a+b<<endl;
}
void add(int a,int b,int c){
    cout<<a+b+c<<endl;
}
int main(){
    add(3,5);
    add(3,5,7);
    return 0;
}
// Function Overloading: We can create a lot of function with same name just by 
//              making diffrence in the number of parameters used in the fucntion.
// Polymorphism: Existing in more than one form.
// Polymorphism types: 1. Compile Time: When Arguments are passed during compilation of prgram.
//                     2. Run Time: When arguments are passed during execution of pragram.