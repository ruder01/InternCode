#include<bits/stdc++.h>
using namespace std;

class BankAccount {
    string accountHolderName;
    int balance=0;
    public:
    BankAccount(string name, int money) {
        accountHolderName = name;
        balance = money;
    }
    void deposit(){
        int val;
        cout<<"Enter the money you want to deposite: ";
        cin>>val;
        if(val < 0)
            cout << "Invalid Amount!!\n";
        else{ 
        balance+=val;
        cout<<val<<" is successfully deposited\n";
        }
    }
    void withdraw(){
        int val;
        cout<<"Enter the money you want to withdraw: ";
        cin >> val;
        if(val < 0)
            cout << "Invalid Amount!!\n";
        else{
        if (val < balance){
        balance-=val;
        cout<<"Money is successfully withdrawl\n";
        }
        else
            cout << "Entered amount is greater than Balance!";
        }
    }
    void showBalance() {
        cout << "Name : " << accountHolderName<<endl;
        cout << "Balance : " << balance<<endl;
    }
    
};

int main(){
    BankAccount B1("Simriti",10000);
    int choice;
    cout<<"\nEnter the choice: ";
    while(1){
        cout<<"\nPress 1. Account Details\nPress 2. Deposit\nPress 3.Withdrawl\n0.Exit\n";
        cin>>choice;
        if (choice == 1) {
            B1.showBalance();
        }
        else if (choice == 2) {
            B1.deposit();
        }
        else if (choice == 3) {
            B1.withdraw();
        }
        else if (choice == 0) {
            cout << "Thanks for Using...";
            exit(0);
        }
        else   cout << "\nIncorrect Choice!!\n";
 }
}
