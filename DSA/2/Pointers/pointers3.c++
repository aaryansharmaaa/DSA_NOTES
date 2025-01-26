#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int arr[10];
    fill_n(arr, 10, 4);

    cout << &arr[0]; // This is how the adress of thr first index of the array...
    cout << endl;

    cout << *arr;       // If we are going to use it it will return the value that will present at the first index of the array...
    cout << *arr + 1;   // Print the value by increasing it by one....
    cout << *(arr + 1); // It will print the value that is present at the 1 index of the array...

    // THE FORMULA TO EVALUATE ARRAY IN POINTER arr[i]=*(arr+i);

    int i = 3;

    cout << i[arr]; // this is going to work because in abckend it is going to work like *(i+arr) which is the 3rd index of the array..

    cout << endl;

    int *ptr = &arr[0];

    cout << sizeof(arr) << endl;  // It will print the size of whole array...
    cout << sizeof(ptr) << endl;  // It will print the size of the pointer..
    cout << sizeof(*ptr) << endl; // It will print the size of the value present at the poinetr...

    cout << &ptr << endl
         << &arr; // Both of them are different because pointer is storing adress at another place and have it own adress...
    cout << endl;

    int array[4];

    int *pointer = &array[0];

    cout << pointer << endl;

    // Now the adress of both the pointer are different because we increase the value of adress by one...

    pointer = pointer + 1;

    cout << pointer << endl;

    return 0;
}

/*


*/