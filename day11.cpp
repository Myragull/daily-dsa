#include<iostream>
#include<vector>
using namespace std;

void swapping(vector <int>& arr,int size){
    int start=0;
    int  end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    vector <int> arr={10,20,30,40,50,60};
    int size=6;
    swapping(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}