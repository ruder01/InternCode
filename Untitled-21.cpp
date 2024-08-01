#include<iostream>
using namespace std;
int main(){
    int np;
    cin>>np;

       int a,b,c,d;
        c=np%10;
        d=np/10;
        a=d/10;
        b=d%10;
        int x=a*a*a;
        int y=b*b*b;
        int z=c*c*c;
        if(x+y+z == np ) cout<<"Yes";
        else cout<<"NO";
        
}

