// print adjacent elements
#include<iostream>
using namespace std;

void reverseAdjacent(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);       
        }
    }
}

void print(int arr[] , int n){
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};

    reverseAdjacent(arr,7);
    print(arr,7);

    return 0;
}


