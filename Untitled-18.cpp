#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int user_input;
    cout<<"Enter the number you want to search for in the array: ";
    cin>>user_input;
    
    //**Linear Search**//

    // int counter=0;
    // for(auto x: a){
    //     if(x==user_input) {
    //         cout<<"Yes Number "<<x<<" is present in the array at Loc: "<<counter;
    //         exit(0);
    //     }
    //     counter++;
    // }
    // cout<<"Not Found";

    //**Binary Search**//
    int l=0;
    int h=5;
    while(l!=h){
    int mid= (l+h)/2;
    if(a[mid]==user_input){
        cout<<"Element Found at "<<mid<<endl;
        exit(0);
    }
    else if(a[mid]< user_input){
        l=mid;
    }
    else if(a[mid]>user_input){
        h=mid;
    }
    }
    cout<<"Element not found ";


return 0;



    } 
