#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size && i + 1 < size; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int size = 6;
    int arr[6] = {5, 4, 7, 8, 5, 7};

    cout << "Original Array: ";
    printArray(arr, size);

    swapAlternate(arr, size);

    cout << "\nUpdated Array: ";
    printArray(arr, size);

    cout << endl;
}