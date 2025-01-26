#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int calcroot(int n)
{
    long long int start = 0;
    long long int end = n;
    long long ans = -1;

    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        long long int sq = mid * mid;

        if (sq == n)
        {
            return mid;
        }
        else if (sq < mid)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

double addnum(int n, int prec, int temp)
{

    double factor = 1;
    double ans = temp;

    for (int i = 0; i < prec; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j <= n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int tempsol = calcroot(n);
    cout << "ANswer is " << addnum(n, 3, tempsol);
    return 0;
}