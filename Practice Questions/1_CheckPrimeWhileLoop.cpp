#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to check prime: ";
    cin >> n;

    int i = 2;
    bool isPrime = true;

    while (i < n)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }

        i++;
    }

    if (isPrime)
    {
        cout << n << " is prime" << endl;
    }
    else
    {
        cout << n << " is not prime" << endl;
    }
}