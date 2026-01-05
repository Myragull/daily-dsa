// Selection Sort

#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
for(int i=0; i<n-1; i++){
    int minValue=i;
    for(int j=i+1; j<n; j++){
        if(arr[j]<arr[minValue]){
            minValue=j;
        }
    }
    swap(arr[minValue],arr[i]);
}
}

int main(){
int arr[6]={6,2,9,5,1,4};
int n=6;
selectionSort(arr,n);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
}