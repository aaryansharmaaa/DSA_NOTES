#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vi = {1, 2, 3, 4, 5};

    vector<int>::iterator it = vi.begin(); // This is how iterator are declared...

    cout << (*it); // This is how we can access the iterator..

    for (it = vi.begin(); it != vi.end(); it++)
    { // This is how we can acess the element of the vector witht the help of iterator..
        cout << (*it) << endl;
    }

    vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {4, 5}};

    vector<pair<int, int>>::iterator i;

    for (i = v_p.begin(); i != v_p.end(); ++i)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
    return 0;
}

//Whar are the algorithms in c++ stl..

//Algorithms are predefined code in stl , thar are helped the programer to perform lot of operation without writing extra line of code ..

// example find() used to find the elemnr in container.. , sort()  used to sort the container...

