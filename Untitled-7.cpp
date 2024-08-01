

#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
int main(){
    bool red_light{false};
    bool green_light{true};
    if(red_light == true){
        cout<<"Stop! "<<endl;
    }
    else{
        cout<<"Go Through! "<<endl;
    }
    if(green_light){
        cout<<"The Light is Green "<<endl;
    }
    else{
        cout<<"The Light is not Green"<<endl;
    }
    cout<<"Size of Bool: " <<sizeof(bool)<<endl;
    sleep(5);
    cout<<endl<<"Red Light: "<<red_light<<endl;
    cout<<"Green Light: "<<green_light<<endl;
    cout<<boolalpha;
    sleep(5);
    cout<<endl<<"Red Light: "<<red_light<<endl;
    cout<<"Green Light: "<<green_light<<endl;
    return 0;
}