#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int start = 0;//Declering the starting point..
    int end = n - 1;//declarint the end point..
    int mid = (start + end) / 2;//Declaring the middle point..

    //Somtime the value of start and end are out of the range of integer then redesing the formula to 

    //mid=start+(end-start/2);  // Very very important...



    while (start <= end)//Set the condition...
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;//Updating the mid value...
    }
    return false;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {1, 2, 3, 4, 5};

    cout << binarysearch(odd, 5, 4);
    return 0;
}

/*
What is binary search ??

Binary search only applied on the monotonic element yah toh element increasing order mai ho ya decreasing order mai...

why binary search over linear search...

Because in linear search we have to iterate each and every index to reach the target , but in case of binary search we have to search in the half..

TIME COMPLEXITY id OlogN

*/