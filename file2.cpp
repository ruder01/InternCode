#include<iostream>
#include<fstream>

using namespace std;

int main () {
    ifstream file("example.txt");
    if (!file) {
        cout << "Error!" << endl;
        return 1;
    }
    string line;
    while(!file.eof()) {

        getline(file, line);
        cout << line << endl;
    }
    file.close();
    return 0;
}