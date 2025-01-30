#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> val = {45, 12, 10, 78};

    int va = *(min_element(val.begin(), val.end())); // In case it vector it is going to return an iterator.. in case of array it it returning pointer
    int max = *(max_element(val.begin(), val.end()));

    int sum = accumulate(val.begin(), val.end(), 0); // Used to return sum of vector.. last is given the initial sum of the vector..
    int ct = count(val.begin(), val.end(), 10);      // Tell the count of the element..

    auto it = find(val.begin(), val.end(), 10);

    if (it != val.end())
    {
        cout << *it << endl;
    }
    else
    {
        cout << "Element not find" << endl;
    }
    cout << va << endl;
    cout << max << endl;
    cout << sum << endl;
    cout << ct << endl;
    return 0;
}

/*
Algorithms are the predefinded code whose menaing is already been explain to the compiler..abort
exapmle-- min_element(v.begin(),v.end());
*/