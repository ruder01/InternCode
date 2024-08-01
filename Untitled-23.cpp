#include<iostream>
using namespace std;
int main () {
    int x,y;
    cin >> x >> y;
    for(int i=1;i<=x;i++) {
        for (int j=1;j<=x;j++) {
            if (i+j == x && i*j == y) {
                cout << endl << i << endl << j;
                exit(0);
            }
            else 
            continue;
        }
    }
}