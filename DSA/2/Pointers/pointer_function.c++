#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void print(int *p) // This is how pointer is passed to the function..
{
    cout << *p << endl;
}

void update(int *p)
{ // This function is basically update the value of the pointer....
    (*p)++;
    cout << "The value after updating is " << (*p) << endl;
}

int getSum(int *arr /* int arr[] (BOTH ARE SAME)*/, int n)
{
    cout << "Size of an array is " << sizeof(arr) << endl;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;

    print(p);
    update(p);

    int arr[6] = {1, 2, 3, 4, 5, 6};

    cout << getSum(arr + 3, 2);

    return 0;
}