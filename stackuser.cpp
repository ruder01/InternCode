#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s;
    int n=0;
    
    while(1){
    cout<<"\nPress 1. Size of the Stack\nPress 2. Insertion\nPress 3. Deletion\nPress 4. Top\nPress 5. Exit "<<endl;
    cin>>n;
    if(n==1) cout<<"Size: "<<s.size()<<endl;
    else if(n==2) {
        int choice;
        cout<<"Enter the Number of element u want to insert: ";
        cin>>choice;
        cout<<"Enter Elements: ";
    for(int i=0;i<choice;i++){
        int x;
        cin>>x;
        s.push(x);
    }
        cout<<"Elements Inserted\n";
    }
    else if(n==3){
        if(s.size()==0){
            cout<<"Empty Stack";
        }
        else{
        cout<<"Popped Element: "<<s.top()<<endl;
        s.pop();
        }
    }
    else if(n==4){
         if(s.size()==0){
            cout<<"Empty Stack";
        }
        else {
        cout<<"Element at Top: "<<s.top()<<endl;
        }
    }
    else if(n==5) exit(0);
    else{
        cout<<"Enter the Right choice\n";
    }
    }
}