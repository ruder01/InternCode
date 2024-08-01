#include<iostream>
#include<fstream>

using namespace std;

int main () {
    ifstream file("example.txt");
    if (!file) {
        cout << "Error!" << endl;
        return 1;
    }
    map<string, int> count ;
    string line;
    int number;
    int sum = 0;
    int count = 0;
    while(!file.eof()) {
        file>>line>>number;
        sum += number;
        count++;
    }
    count--;
    sum-=number;
    cout << "\nSum: " << sum;
    cout << "\nAverage: " << sum/count;
    file.close();
    return 0;
}
