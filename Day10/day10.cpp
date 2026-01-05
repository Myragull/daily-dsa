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



// bubble sort
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int arr[6] = {10, 20, 2, 4, 30, 15};
    int size = 6;

    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

