// Binary Search Basics

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int n)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start);

        if (arr[mid] == n)
        {
            return mid;
        }

        if (n > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int even[8] = {0, 2, 4, 6, 8, 12, 20, 34};
    int result = binarySearch(even, 8, 34);
    cout << result;
}