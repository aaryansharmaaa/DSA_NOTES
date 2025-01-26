#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i; // We are considering the current index to be the minimum...

        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j]) // We are checking that there is any element shorter than the curren minindex..
            {
                minIndex = j; // Update the current min index...
            }
        }
        swap(arr[minIndex], arr[i]); // Swap the value of min index with the cvurren tindex...
    }
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {56, 29, 5, 3, 20};

    selectionsort(arr, 5);
    printarr(arr, 5);
    return 0;
}

/*
What is selection sort??

Selection sort is basically the simple algorith that used to pick the smallest (or largest depending on order ) element from unsorted
portion and used to place them in correct position...

TIME COMPLEXITY ==O(n^2)//Same for best case ans worst case..

SPACE COMPLEXITY ==O(1);

*/