#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // Iterating the index....
    {
        for (int j = 0; j < n - i; j++) // IF the largest element is already placed then then reduce the size of the loop..
        {
            if (arr[j] > arr[j + 1]) // Check the condition...
            {
                swap(arr[j], arr[j + 1]); // Check the adjsent element..
            }
        }
    }
}

void bestcase(int arr[], int n) // The best case complexity os O(n);
{
    for (int i = 0; i < n - 1; i++)
    {
        bool checkswap = false; // We check the condition is false...
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                checkswap = true; // If element are already sorted mark them true...
            }
        }
        if (checkswap == false) // Check the condition if swap ...
        {
            break;
        }
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
    int arr[5] = {10, 1, 7, 6, 14};
    bubblesort(arr, 5);
    printarr(arr, 5);

    return 0;
}

/*
What is bubble sort??

 Bubble sort is basically the algorithm that compare the adjesent element and swap them if they are not in right order..
 This process continue until the array is not sorted completly...


 TIME COMPLEXITY=== O(n^2) Worst case   in best case it can be solved in O(n)  complexity...
 SPACE COMPLEXITY ===o(1);

*/