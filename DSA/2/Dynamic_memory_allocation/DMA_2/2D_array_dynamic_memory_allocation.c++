#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m;
    cin >> m;
    int **arr = new int *[n]; // This is how the 2D array is allocated in the dynamic memory....

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[m]; // Filling the number of column...
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j]; // Taking all the input...
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " "; // Showing the output...
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i]; // Free the memory...
    }

    delete[] arr; // Free the poinetr...
    return 0;
}