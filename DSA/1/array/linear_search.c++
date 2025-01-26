/*
What is linear search

Linear seaarch is basically the concept that is used to iterate from oth index to n-1 index to find the elemement
it will iterate for each and every position in the array start from 0 to n-1 ;

*/

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool linearsearch(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
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
    int arr[5] = {45, 25, 12, 13, 10};

    if (linearsearch(arr, 5, 33))
    {
        cout << "The key is present inside the array";
    }
    else
    {
        cout << "The key is not present inside the array";
    }
    return 0;
}