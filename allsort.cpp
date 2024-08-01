// bubble sort
#include<iostream>
#include<algorithm>
using namespace std;

void InsertionSort(int arr[],int n) {
    for (size_t i = 1 ; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key ) {
        arr[j + 1] = arr[j];
        --j;
        }
        arr[j+1] = key;
    
    
    }
}
void selectionsort(int a[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(a[i]>a[j]) {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
   selectionsort(a,n);
   InsertionSort(a,n);

} 