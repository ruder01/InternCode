//create a function that will generate otp
#include<bits/stdc++.h>
using namespace std;
vector<char>a={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','1','2','3','4','5','6','7','8','9','0'};
int main(){
    string result;
    for(int i=0;i<8;i++){
        result+=a[rand()%a.size()];
    }
    cout<<result;

}