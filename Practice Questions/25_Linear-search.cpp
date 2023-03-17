#include <bits/stdc++.h>
using namespace std;

bool LinearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int arr[10] = {4, 7, 8, 9, 3, 5, 5, 9, 56, 4};

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    bool found = LinearSearch(arr, 10, key);

    if (found)
    {
        cout << "Key is present in array" << endl;
    }
    else
    {
        cout << "Key is not present in array" << endl;
    }
}