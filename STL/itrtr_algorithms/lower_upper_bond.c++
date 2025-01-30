#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {10, 11, 15, 45, 100};

    int key;
    cin >> key;

    vector<int>::iterator itr;
    vector<int>::iterator it;

    itr = lower_bound(arr.begin(), arr.end(), key);
    it = upper_bound(arr.begin(), arr.end(), key);

    cout << *itr << endl;

    cout<<*it<<endl;
    return 0;
}

// In case of array we have to use poiter in case of vector we have to use iterator...

/*

Lower bond -- lower bond is used to find the element if element is present it is goint to return it otherwise the element that is larger than the element ...abort

Upper bond-- upper bond is used to find the element that is larger then the finding element not the current element .


*/