#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int factorial(int n)
{
    if (n == 1)//Always write the base case while using recursion...
    {
        return 1;
    }

    int ans = n * factorial(n - 1);//When function call it self...

    return ans;
}

int main()
{
    int n;
    cin >> n;

    int answer = factorial(n);//Function call..

    cout << answer;
    return 0;
}

/*
What is recursion??

When a function call it self it is called recursion...

What is recursive function??



*/