#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void InsertionSort(vector<int>& arr) {
    /*for (size_t i = 1 ; i < arr.size(); i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key ) {
        arr[j + 1] = arr[j];
        --j;
        }
        arr[j+1] = key;
    }*/
    sort(arr.begin(), arr.end());
    }

int main () {
    vector<int> arr = {5,2,1,7,8};
    InsertionSort(arr);
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}