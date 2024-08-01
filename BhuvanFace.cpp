#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<10;i++){
        for(int j=0;j<15;j++){
            // if(j==0 && i<10) cout<<"\t\t\t\t\t"; 
            if(i==0  && j<7) cout<<"* ";
            else if(i<7 &&j==0) cout<<"* ";
            else if(i==6 && j<7) cout<<"* ";
            else if(j==6 && i<7) cout<<"* ";
            else if(i==1 && j==2) cout<<"# ";
            else if(i==1 && j==4) cout<<"# ";
            else if(i==2 && j==3) cout<<"! ";
            else if(i==4 && j>1 && j<5) cout<<"- ";
            else if(i==3 && j==7)    cout<<"-->BHUVAN";
            else if(i>=7&& (j==2 || j==4)) cout<<"! ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    //i=10;
    for(int i=10;i<20;i++){
        for(int j=0;j<7;j++){
           // if(j==0 && i<20) cout<<"\t\t\t\t\t"; 
            if(i==10  && j<7) cout<<"* ";
            else if(i<20 &&j==0 ) cout<<"* ";
            else if(i==19 && j<7) cout<<"* ";
            else if(i>10 && i<20 && j==6) cout<<"* ";
            else cout << "  ";
        }
        cout<<endl;
    }
    //i=20;
    for(int i=20;i<25;i++){
        for(int j=0;j<7;j++){
            //if(j==0 && i>=20) cout<<"\t\t\t\t\t"; 
            if(i>=20 && j==0 || i>=20 && j==1) cout<<"*";
            else if(i>=20 && j==5 || i>=20 && j==6) cout<<"*";
            else cout<<"   ";
        }
        cout<<endl;
    }

    
}