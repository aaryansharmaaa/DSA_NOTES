#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int num = 5;

    int *p = &num;
    int **dp = &p;

    cout << p << endl;
    cout << *dp << endl;

    // Line 14 and 15 both are the same thing that are going to print.....

    return 0;
}

/*

What is double pointer??

Double pointer is basically the kind of pointer that store the adress of the another pointer....

*/