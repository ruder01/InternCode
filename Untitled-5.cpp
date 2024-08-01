

#include<iostream>
using namespace std;
int main(){
    int Apple_count{5};
    int Orange_count{10};
    int Fruit_count{Apple_count + Orange_count};
    
    int narrowing_conversion_functional (2.9);

    cout<<"Apple count: "<<Apple_count<<endl;
    cout<<"Orange count: "<<Orange_count<<endl;
    cout<<"Fruit count: "<<Fruit_count<<endl;
    cout<<"Narrowing conversion: "<<narrowing_conversion_functional<<endl;
    return 0;
    }