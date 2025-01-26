#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void printarr(int arr[], int n) // This is how we are going to use array with functions...
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // This is how array is declared..
    int art[7];
    fill_n(art, 7, 1); // Use to fill the array with the same value..

    printarr(arr, 5);

    return 0;
}

/*
What is an array??

Array is the collection of item of similar type whose memory is allocated in the contiginous formate;


Pass by adress in array..

Array always pass its adress when ever we call an array from the main function it will always pass the adress
making changes inside the function will affect the array in the main function...

*/