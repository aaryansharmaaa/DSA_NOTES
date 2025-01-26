#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool ispresent(int arr[][3], int n, int row, int col)//Function to find the target in the 2 D array...
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (n == arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    // int arr[3][3]={{1,11,11},{2,22,222},{3,33,333}}; //Hard coded the element row wise...

    int arr[3][3];

    // Taking input in 2D array...  for rows..
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Taking input in a 2D array ... for column...
    // for (int j = 0; j < 3; j++)
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // Showing the output in the 2D array...
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search in the 2D array ";
    int target;
    cin >> target;

    if (ispresent(arr, target, 3, 3))
    {
        cout << "Element Present in the 2D array" << endl;
    }
    else
    {
        cout << "Element not found in the 2d array" << endl;
    }

    return 0;
}

/*

What is a 2 D array?

A 2D array is a kind of data structure that is use to store the data in the grid formate in the rows and column formate...
similar to matrix..


*/