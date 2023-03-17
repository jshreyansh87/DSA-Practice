#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse(int arr[], int size)
{
    int i = 0, j = size - 1;

    while (i < j)
    {
        int c = arr[i];
        arr[i] = arr[j];
        arr[j] = c;

        i++;
        j--;
    }
}

int main()
{
    int arr[6] = {4, 7, 8, 81, 9, 6};
    int size = 6;

    cout << "Original Array: ";
    printArray(arr, size);

    reverse(arr, size);

    cout << "\nReversed Array: ";
    printArray(arr, size);
}