#include<iostream>
using namespace std;
float pound(float r){
    return r*106;
}
float inrp(float p){
    return p/106;
}
float dollar(float r){
    return r*83;
}
float inrd(float p){
    return p/83;
}
float yuan(float r){
    return r*11;
}
float inry(float p){
    return p/11;
}
int main(){
    int n;
    cout<<"Press 1. Conversion Pound-Inr\tPress 2. Conversion Inr-Pound\nPress 3. Conversion Dollar-Inr\tPress 4. Conversion Inr-Dollar\nPress 5. Conversion Yuan-Inr\tPress 6. Conversion Inr-Yuan\n\tPress 7. Exit ";
    while(1){
    cin>>n;
    float m;
    cout<<"Enter the money: ";
    cin>>m;
    if(n==1) cout<<pound(m);
    else if(n==2) cout<<inrp(m);
    else if(n==3) cout<<dollar(m);
    else if(n==4) cout<<inrd(m);
    else if(n==5) cout<<yuan(m);
    else if(n==6) cout<<inry(m);
    else if(n==7) break;
    else cout<<"Enter the right choice\n";
    }
    return 0;
}