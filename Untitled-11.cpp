#include<iostream>
using namespace std;
int add(int a, int b){
    int sum=a+b;
    return sum;
}
int sub(int a, int b){
    int sum=a-b;
    return sum;
}
int mul(int a, int b){
    int sum=a*b;
    return sum;
}
int division(int a, int b){
    int sum=a/b;
    return sum;
}
int rem(int a, int b){
    int sum=a%b;
    return sum;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Sum :"<< add(a,b)<<endl;
    cout<<"Subtraction :"<< sub(a,b)<<endl;
    cout<<"Product :"<< mul(a,b)<<endl;
    cout<<"Quotient :"<< division(a,b)<<endl;
    cout<<"Remainder :"<< rem(a,b)<<endl;
    
    return 0;

}