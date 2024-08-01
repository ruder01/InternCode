#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Car{
private:
    string licensePlate;
    string owner;
public:
    Car(string lp, string o):licensePlate(lp),owner(o){}
    string getlicenseplate(){
        return licensePlate;
    }
    string getowner(){
        return owner;
    }
    void display(){
        cout<<"License Plate: "<<licensePlate<<" \nOwner Name: "<<owner<<endl;
    }

};
class Parkinglot{
private:
    vector <Car> parkedCars;
    int capacity;
public:
    Parkinglot(int cap):capacity(cap){}
    bool parkcar(Car c){
        if(parkedCars.size()<capacity){
            parkedCars.push_back(c);
            return true;
        }
        else{
            cout<<"Parking lot is full!\n";
            return false;
        }
    }
    void displayParkedCars(){
        cout<<"Parked Cars: ";
        for(auto car:parkedCars){
            car.display();
        }
    }
};
int main(){
    Parkinglot myparkinglot(3);
    Car car1("BC123","Sanjay Gore");
    Car car2("YZ456","Janvi Manse");

    myparkinglot.parkcar(car1);
    myparkinglot.parkcar(car2);

    myparkinglot.displayParkedCars();
    return 0;
}