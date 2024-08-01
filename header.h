#include<iostream>
#include<algorithm>
using namespace std;
void insertionSort(int arr[],int n){
  for (int i = 1; i < n; ++i) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}
void mergeSort(int arr[],int n) {
  stable_sort(arr.begin(), arr.end(),greater<int>());
}
void bubbleSort(int arr[],int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
void selectionSort(int arr[],int n) {
  for (int i = 0; i < n - 1; ++i) {
    int min_idx = i;
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }
    if (min_idx != i) {
      swap(arr[min_idx], arr[i]);
    }
  }
}
void display(int arr[],int n) {
  for (int val=0;val<n;val++){
    cout << arr[val] << " ";
  }
  cout << endl;
}

