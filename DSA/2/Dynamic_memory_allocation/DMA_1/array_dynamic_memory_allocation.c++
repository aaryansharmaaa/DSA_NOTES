#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int sumArr(int *arr, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n]; // This is how the array is alocated in the dynamic memory...

    for (int i = 0; i < n; i++) // Loop to take the input...
    {
        cin >> arr[i];
    }
    delete[] arr; // This is how memory is dealocated whent the thing or object is made dynamically...

    cout << sumArr(arr, n);
    return 0;
}

/*

What is the difference between static and dynamic memory allocation...

Ans in startic allocation when memory is allocated it is allocated to the stack
in dynamic when memory is allocated memory is allocated to Heap...

In static allocation memory is released automatically (delocate) when it move out of scope..
But not in case of Heap..(We ahve to do it manually). with the help of delete keyword..

*/