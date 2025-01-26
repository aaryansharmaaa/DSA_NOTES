#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

inline int funCall(int &a, int &b)
{ // This is how the function call is done here...
    return (a > b) ? a : b;
}

int main()
{
    int a = 1;
    int b = 2;

    int ans = funCall(a, b); // Th funCall here is replaced by (a>b) ? a:b ...
    cout << ans;
    return 0;
}
/*
Inline function are basically used to reduce the function call overhead..

Body of the function must be of not more that 3 line only that it will be the inline function..

(NO EXTRA MEMORY USAGE )
(NO EXTRA FUNCTION CALL HERE)

*/