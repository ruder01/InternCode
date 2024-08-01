#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
int main(){
    int red;
    red=1;
    int  i=1;
    while(i){
        if(i%2==0){
            red=0;
        }
        else{
            red=1;
        }
        sleep(5);
        if(red==1)
            cout<<"Stop!!\n";
        else
            cout<<"GO\n";
        i++;
    }
    return 0;
}